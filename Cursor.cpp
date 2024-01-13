<!DOCTYPE html>
<html lang="pt_BR>
<head>
    <title>Wagner Marcuci Software C/C++</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no">
</head>
<body style="background-color:black; color:white;" alink="white" link="white" vlink="white">
<h2 style="border: 1px solid white;width:400px;padding:5px;">&nbsp;&nbsp;Windows Criar Janelas no Cursor</h2>
<br/>
<a href="https://www.youtube.com/watch?v=vDnh1qs0_hs" 
style="font-family:Candara;text-decoration:none;color:red;">V&iacute;deo do Canal</a>
</br></br>
<pre>
#include &lt;windows.h&gt;
#include &lt;stdio.h&gt;
#include &lt;tchar.h&gt;
#include &lt;wingdi.h&gt;
#include &lt;commctrl.h&gt;

#define ID_STATUSBAR 1001

HINSTANCE g_instance = 0;
HWND g_statusbar = NULL;
HWND g_label = NULL;
HWND g_label_tmp = NULL;
POINT pointXY;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        case WM_SETFOCUS:
            printf( "WM_SETFOCUS \n" );
            break;

        case WM_ACTIVATE:
            printf( "WM_ACTIVATE \n" );
            break;

        case WM_CREATE:
            printf( "WM_CREATE \n" );

            g_label = CreateWindow(
                            TEXT("STATIC"),
                            TEXT("nome_label"),
                            WS_CHILD | WS_VISIBLE | SS_RIGHT | SS_NOTIFY | WS_BORDER,
                            100,
                            50,
                            200,
                            22,
                            hwnd,
                            NULL,
                            g_instance,
                            NULL );

            g_statusbar = CreateStatusWindowA(WS_CHILD | WS_VISIBLE | WS_BORDER,
                  "x, y",
                  hwnd,
                  ID_STATUSBAR);

            int ptArray[2]; // qtde e tamanho das celulas

            RECT rect;
            GetClientRect( g_statusbar, &rect);

            ptArray[0] = 200; // tamanho da celula
            ptArray[1] = rect.right; // o ultimo vai ate o fim.
            SendMessage(g_statusbar, SB_SETPARTS, 2, (LPARAM)(LPINT)ptArray);
        break;

        case WM_SIZE:
            printf( "WM_SIZE \n" );
            break;

        case WM_MOVE:
            printf( "WM_MOVE \n" );
            break;

        case WM_COMMAND:
            printf( "WM_COMMAND \n" );

            break;

        case WM_LBUTTONDOWN:  //--&gt;
            printf( "WM_LBUTTONDOWN \n" );
            {
                ScreenToClient( hwnd, &pointXY);
                char xy[ 20 ]; // x: 9999, y: 9999
                swprintf( xy, 20, L"x: %ld, y: %ld\n", pointXY.x, pointXY.y );
                SendMessage(g_statusbar,
                          SB_SETTEXT,
                          0,
                         (LPARAM)xy );

                HWND tmp = ChildWindowFromPoint( hwnd, pointXY );

                if ( tmp == g_label_tmp )
                {
                    printf( "iguais..............\n" );
                    CloseWindow( tmp );
                }
                else
                {
                    g_label_tmp = CreateWindow(
                        TEXT("STATIC"),
                        TEXT("nome_label"),
                        WS_CHILD | WS_VISIBLE | SS_CENTER | WS_BORDER,
                        pointXY.x,
                        pointXY.y,
                        100,
                        22,
                        hwnd,
                        NULL,
                        g_instance,
                        NULL );
                }

                SetWindowText( g_label, xy );
            }
            break;

        case WM_LBUTTONUP:
            printf( "WM_LBUTTONUP \n" );
            break;

        case WM_CLOSE:
            printf( "WM_CLOSE \n" );
            DestroyWindow( g_label_tmp );
        break;

        case WM_RBUTTONDOWN:
            printf( "WM_RBUTTONDOWN \n" );
            break;

        case WM_RBUTTONUP:
            printf( "WM_RBUTTONUP \n" );
            break;

        case WM_PAINT:
            {
                printf( "WM_PAINT \n" );

                PAINTSTRUCT ps;
                BeginPaint( hwnd, &ps );
                FillRect( GetDC( hwnd ), &ps.rcPaint, (HBRUSH) (COLOR_WINDOW+1));
                EndPaint( hwnd, &ps );
                return 0;
            }

        case WM_DESTROY:
            printf( "WM_DESTROY \n" );
            PostQuitMessage(0);
            return 0;

    default:
        GetCursorPos( &pointXY );

    }

    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}


INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
    const char * CLASS_NAME  = TEXT("CLASSE_WINDOWS");
    g_instance = hInstance;

    WNDCLASS wc = { };

    wc.lpfnWndProc   = WindowProc;
    wc.hInstance     = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

     //Create the window.

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        TEXT("Janela Windows"),
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, // x position
        CW_USEDEFAULT, // y position
        1000, // witdh
        500, // height
        NULL,
        NULL,
        hInstance,
        NULL
        );

    if (hwnd == NULL)
    {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

     //Run the message loop.

    MSG msg = { };

    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}


</pre>
</body>
</html>

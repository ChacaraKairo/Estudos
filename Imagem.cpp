#include <opencv2/opencv.hpp>

int main() {
    // Cria uma imagem preta de 100x100 pixels
    cv::Mat imagem(100, 100, CV_8UC3, cv::Scalar(0, 0, 0));
    
    // Exibe a imagem (requer uma janela aberta com o OpenCV)
    cv::imshow("Imagem", imagem);
    
    // Aguarda uma tecla ser pressionada
    cv::waitKey(0);
    
    return 0;
}

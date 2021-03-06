#include <opencv/cv.h>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/highgui/highgui.hpp>

double calcCircularity(std::vector<cv::Point> contour);

std::vector<cv::Point> findCircle(cv::Mat& mbgra);
std::vector<std::vector<cv::Point> > findAllRectangles(cv::Mat& mbgra);
std::vector<std::vector<cv::Point> > findDivisionBasedOnWhiteSpace(std::vector<std::vector<cv::Point> > potentialCheckboxes, cv::Mat& mbgra);
std::vector<std::vector<cv::Point> > getCropOfToDoLines(std::vector<std::vector<cv::Point> > potentialCheckboxes, cv::Mat& mbgra);
std::vector<std::vector<cv::Point> > filterSquareByArea(std::vector<std::vector<cv::Point> > checkboxes);
std::vector<std::vector<cv::Point> > filterSquareByCoordinates(std::vector<std::vector<cv::Point> > checkboxes, cv::Mat& mbgra);
bool sortByY(cv::Rect , cv::Rect);
cv::Mat highpass(cv::Mat& imagef, cv::Mat& mask3C, int blursize);

void removeyellow(cv::Mat& img);

cv::Mat findColonies(cv::Mat& mbgr, int& colonies);

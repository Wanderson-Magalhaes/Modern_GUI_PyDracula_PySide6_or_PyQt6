#include <QMainWindow>
#include <QtWidgets>
#include <QEvent>

class MainWindow: public QMainWindow
{
  Q_OBJECT
  
  public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
  private:
    Ui::MainWindow *ui;


  protected:
    void buttonClick(void),
    void resizeEvent(QResizeEvent *event);
    void mousePressEvent(QMouseEvent *event);
            
}

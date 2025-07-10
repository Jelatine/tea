#if 1
#include <iostream>
int main(){
  std::cout << "demo" << std::endl;
}

#elif 0
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    // 创建 QApplication 实例，处理应用程序的初始化和事件循环
    QApplication app(argc, argv);

    // 创建一个 QWidget 作为主窗口
    QWidget window;

    // 设置窗口标题
    window.setWindowTitle("Simple Qt5 Application");

    // 显示窗口
    window.show();

    // 进入应用程序的主事件循环，等待用户操作
    return app.exec();
}

#elif 0
#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        // TIP Press <shortcut actionId="Debug"/> to start debugging your code. We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/> breakpoint for you, but you can always add more by pressing <shortcut actionId="ToggleLineBreakpoint"/>.
        std::cout << "i = " << i << std::endl;
    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
#endif

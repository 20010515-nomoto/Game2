#ifndef CINPUT_H
#define CINPUT_H

#include "GLFW/glfw3.h"
/*
���̓N���X
CInput
*/
class CInput{
	//�E�B���h�E�̃|�C���^
	static GLFWwindow* mpWindow;
public:
	/*
	������
	Init
	*/
	static void Init(GLFWwindow* w);
	/*
	�}�E�X�J�[�\���̍��W���擾����
	GetMousePos(X���W�|�C���^,Y���W�|�C���^)
	�f�B�X�v���C�̍��オ���_(0,0)
	*/
	static void GetMousePos(int *px, int *py);
	/*
	�}�E�X�{�^���̏��
	GetMouseButton(�{�^��)
	�{�^��:
	GLFW_MOUSE_BUTTON_LEFT:���{�^��
	GLFW_MOUSE_BUTTON_RIGHT:�E�{�^��
	return:
	true:������Ă���
	false:������Ă��Ȃ�
	*/
	static bool GetMouseButton(int button);
	/*
	�}�E�X�J�[�\���̍��W��ݒ肷��
	SetCursorPos(X���W,Y���W)
	�f�B�X�v���C�̍��オ���_(0,0)
	*/
	static void SetMousePos(int x, int y);
	/*
	�}�E�X�J�[�\���̍��W���擾����
	GetMousePosW(X���W�|�C���^, Y���W�|�C���^)
	�E�B���h�E�̍��オ���_(0,0)
	*/
	static void GetMousePosW(int *px, int *py);
};


#endif
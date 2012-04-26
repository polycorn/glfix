#ifndef GLFIXCAMERA_H
#define GLFIXCAMERA_H

#include"glm/glm.hpp"
#include"glm/ext.hpp"

namespace	glfix
	{
		class	glfixCamera
		{
		public:
			glfixCamera();
			virtual	~glfixCamera();

			virtual	void	SetViewMatrix(const	glm::mat4	&	new_val)	{mat_view = new_val;}
			virtual	glm::mat4&	GetViewMatrix(void)	{return mat_view;}

		private:
			glm::mat4	mat_view;
		};

		class	glfixCameraPos	:	public	glfixCamera
		{
		public:
			glfixCameraPos();
			virtual	~glfixCameraPos();

			virtual	void	SetPosition(const	glm::vec4	&	new_val)	{vec_position = new_val;}
			virtual	void	SetPosition(const	glm::vec4	&	new_val)	{vec_position = new_val;}
			virtual	void	SetPosition(const	glm::vec4	&	new_val)	{vec_position = new_val;}
			virtual	void	SetPosition(const	glm::vec4	&	new_val)	{vec_position = new_val;}
			virtual	void	SetPosition(const	glm::vec4	&	new_val)	{vec_position = new_val;}

		private:
			glm::vec4	vec_position;
		};

		class	glfixCameraFPS	:	public	glfixCamera
		{
		public:
			glfixCameraFPS();
			virtual	~glfixCameraFPS();

		private:

		};
	}

#endif // GLFIXCAMERA_H

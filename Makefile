# FM:
# 	g++ CMF_FileManager.cxx CMF_FileManager.hpp -o fmt.exe -Wall -pedantic -std=c++11
O:
	g++ src\object\CMF_Vertex.hpp src\object\CMF_Vertex.cxx src\object\CMF_Polygon.hpp src\object\CMF_Polygon.cxx src\object\CMF_Mesh.hpp src\object\CMF_Mesh.cxx src\object\CMF_VertexTexture.hpp src\object\CMF_VertexTexture.cxx src\object\CMF_Texture.hpp src\object\CMF_Texture.cxx main.cxx -o bin\ot.exe -Wall -pedantic -std=c++11
# EH:
# 	g++ CMF_Error.hpp CMF_ErrorHandler.hpp CMF_ErrorHandler.cxx -o eht.exe -Wall -pedantic -std=c++11
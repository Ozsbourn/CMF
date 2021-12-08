----------------------------------------------------------------------------
#CMF								-- Identifier of origin a file

--Header
8 bytes  	 : size_of_file
8 bytes  	 : count_of_materials_files
8 bytes 	 : object_name (64 symbols)
8 * N bytes  : notes_of_material_name_files (64 symbols for each)

--Body
v  number_of_row(4 bytes)			-- v is a tag that means vertex
float float float
		...
vn number_of_row(4 bytes)			-- vn is a tag that means normals
float float float
		...
vt number_of_row(4 bytes)			-- vt is a tag that means texture_coordinates 
float float
		...
f  number_of_row(4 bytes)			-- f is a tag that means faces
v1 v2 v3
		...

----------------------------------------------------------------------------
#include <STEPControl_Reader.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepTools.hxx>


Standard_Integer main()
{
    STEPControl_Reader reader;

    const char *StepAddress = "/home/marc/Documents/Code/StepSample/Sample.step";
    reader.ReadFile(StepAddress);

    Standard_Integer NbRoots = reader.NbRootsForTransfer();

    
}





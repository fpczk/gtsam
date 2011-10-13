// automatically generated by wrap on 2010-Feb-23
#include <wrap/matlab.h>
#include <Test.h>
void mexFunction(int nargout, mxArray *out[], int nargin, const mxArray *in[])
{
  checkArguments("return_ptrs",nargout,nargin-1,2);
  shared_ptr<Test> self = unwrap_shared_ptr< Test >(in[0],"Test");
  shared_ptr<Test> p1 = unwrap_shared_ptr< Test >(in[1], "Test");
  shared_ptr<Test> p2 = unwrap_shared_ptr< Test >(in[2], "Test");
  pair< shared_ptr<Test>, shared_ptr<Test> > result = self->return_ptrs(p1,p2);
  out[0] = wrap_shared_ptr(result.first,"Test");
  out[1] = wrap_shared_ptr(result.second,"Test");
}

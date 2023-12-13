#ifndef org_hipparchus_analysis_interpolation_MicrosphereProjectionInterpolator_H
#define org_hipparchus_analysis_interpolation_MicrosphereProjectionInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class MultivariateFunction;
      namespace interpolation {
        class InterpolatingMicrosphere;
        class MultivariateInterpolator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        class MicrosphereProjectionInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1f018b93f72bba3d,
            mid_init$_16456fe8633b1048,
            mid_interpolate_535a45a20e20bbcf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MicrosphereProjectionInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MicrosphereProjectionInterpolator(const MicrosphereProjectionInterpolator& obj) : ::java::lang::Object(obj) {}

          MicrosphereProjectionInterpolator(const ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere &, jdouble, jboolean, jdouble);
          MicrosphereProjectionInterpolator(jint, jint, jdouble, jdouble, jdouble, jdouble, jboolean, jdouble);

          ::org::hipparchus::analysis::MultivariateFunction interpolate(const JArray< JArray< jdouble > > &, const JArray< jdouble > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        extern PyType_Def PY_TYPE_DEF(MicrosphereProjectionInterpolator);
        extern PyTypeObject *PY_TYPE(MicrosphereProjectionInterpolator);

        class t_MicrosphereProjectionInterpolator {
        public:
          PyObject_HEAD
          MicrosphereProjectionInterpolator object;
          static PyObject *wrap_Object(const MicrosphereProjectionInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

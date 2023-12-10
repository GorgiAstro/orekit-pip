#ifndef org_hipparchus_analysis_interpolation_InterpolatingMicrosphere2D_H
#define org_hipparchus_analysis_interpolation_InterpolatingMicrosphere2D_H

#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        class InterpolatingMicrosphere2D;
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

        class InterpolatingMicrosphere2D : public ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere {
         public:
          enum {
            mid_init$_2e15f46ce2042002,
            mid_copy_faad0bc365040058,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InterpolatingMicrosphere2D(jobject obj) : ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InterpolatingMicrosphere2D(const InterpolatingMicrosphere2D& obj) : ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere(obj) {}

          InterpolatingMicrosphere2D(jint, jdouble, jdouble, jdouble);

          InterpolatingMicrosphere2D copy() const;
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
        extern PyType_Def PY_TYPE_DEF(InterpolatingMicrosphere2D);
        extern PyTypeObject *PY_TYPE(InterpolatingMicrosphere2D);

        class t_InterpolatingMicrosphere2D {
        public:
          PyObject_HEAD
          InterpolatingMicrosphere2D object;
          static PyObject *wrap_Object(const InterpolatingMicrosphere2D&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

#ifndef org_hipparchus_analysis_interpolation_InterpolatingMicrosphere_H
#define org_hipparchus_analysis_interpolation_InterpolatingMicrosphere_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        class InterpolatingMicrosphere;
      }
    }
    namespace random {
      class UnitSphereRandomVectorGenerator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        class InterpolatingMicrosphere : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f411c87cf5f815c1,
            mid_copy_8d04df50e5d7067d,
            mid_getDimension_412668abc8d889e9,
            mid_getSize_412668abc8d889e9,
            mid_value_c089c9c00fccb9ee,
            mid_add_bdd4888f749f6b83,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InterpolatingMicrosphere(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InterpolatingMicrosphere(const InterpolatingMicrosphere& obj) : ::java::lang::Object(obj) {}

          InterpolatingMicrosphere(jint, jint, jdouble, jdouble, jdouble, const ::org::hipparchus::random::UnitSphereRandomVectorGenerator &);

          InterpolatingMicrosphere copy() const;
          jint getDimension() const;
          jint getSize() const;
          jdouble value(const JArray< jdouble > &, const JArray< JArray< jdouble > > &, const JArray< jdouble > &, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(InterpolatingMicrosphere);
        extern PyTypeObject *PY_TYPE(InterpolatingMicrosphere);

        class t_InterpolatingMicrosphere {
        public:
          PyObject_HEAD
          InterpolatingMicrosphere object;
          static PyObject *wrap_Object(const InterpolatingMicrosphere&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

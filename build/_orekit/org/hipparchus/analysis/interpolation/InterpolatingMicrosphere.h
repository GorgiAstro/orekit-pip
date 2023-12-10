#ifndef org_hipparchus_analysis_interpolation_InterpolatingMicrosphere_H
#define org_hipparchus_analysis_interpolation_InterpolatingMicrosphere_H

#include "java/lang/Object.h"

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

        class InterpolatingMicrosphere : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fdaa6566f103e9da,
            mid_copy_bc50b566c273722a,
            mid_getDimension_570ce0828f81a2c1,
            mid_getSize_570ce0828f81a2c1,
            mid_value_8337bea1db3c18f3,
            mid_add_a47a33f7938e1575,
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

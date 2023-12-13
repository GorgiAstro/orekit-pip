#ifndef org_hipparchus_analysis_integration_gauss_GaussIntegrator_H
#define org_hipparchus_analysis_integration_gauss_GaussIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    namespace analysis {
      class UnivariateFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
      namespace integration {
        namespace gauss {

          class GaussIntegrator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_24d37c4bbd61d20e,
              mid_init$_b15baa0161a4e9c7,
              mid_getNumberOfPoints_55546ef6a647f39b,
              mid_getPoint_2afcbc21f4e57ab2,
              mid_getWeight_2afcbc21f4e57ab2,
              mid_integrate_6bcb3ad6aa509267,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GaussIntegrator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GaussIntegrator(const GaussIntegrator& obj) : ::java::lang::Object(obj) {}

            GaussIntegrator(const ::org::hipparchus::util::Pair &);
            GaussIntegrator(const JArray< jdouble > &, const JArray< jdouble > &);

            jint getNumberOfPoints() const;
            jdouble getPoint(jint) const;
            jdouble getWeight(jint) const;
            jdouble integrate(const ::org::hipparchus::analysis::UnivariateFunction &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          extern PyType_Def PY_TYPE_DEF(GaussIntegrator);
          extern PyTypeObject *PY_TYPE(GaussIntegrator);

          class t_GaussIntegrator {
          public:
            PyObject_HEAD
            GaussIntegrator object;
            static PyObject *wrap_Object(const GaussIntegrator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif

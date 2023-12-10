#ifndef org_orekit_propagation_analytical_gnss_data_QZSSAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_QZSSAlmanac_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            class QZSSAlmanac : public ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getHealth_f2f64475e4580546,
                mid_getSource_0090f7797e403f43,
                mid_setHealth_0a2a1ac2721c0336,
                mid_setSource_e939c6558ae8d313,
                mid_setSqrtA_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QZSSAlmanac(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QZSSAlmanac(const QZSSAlmanac& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {}

              QZSSAlmanac();

              jint getHealth() const;
              ::java::lang::String getSource() const;
              void setHealth(jint) const;
              void setSource(const ::java::lang::String &) const;
              void setSqrtA(jdouble) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            extern PyType_Def PY_TYPE_DEF(QZSSAlmanac);
            extern PyTypeObject *PY_TYPE(QZSSAlmanac);

            class t_QZSSAlmanac {
            public:
              PyObject_HEAD
              QZSSAlmanac object;
              static PyObject *wrap_Object(const QZSSAlmanac&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif

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
                mid_init$_ff7cb6c242604316,
                mid_getHealth_d6ab429752e7c267,
                mid_getSource_d2c8eb4129821f0e,
                mid_setHealth_8fd427ab23829bf5,
                mid_setSource_105e1eadb709d9ac,
                mid_setSqrtA_1ad26e8c8c0cd65b,
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

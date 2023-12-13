#ifndef org_orekit_models_earth_atmosphere_data_AbstractSolarActivityDataLoader$LineParameters_H
#define org_orekit_models_earth_atmosphere_data_AbstractSolarActivityDataLoader$LineParameters_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class AbstractSolarActivityDataLoader$LineParameters;
          }
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            class AbstractSolarActivityDataLoader$LineParameters : public ::java::lang::Object {
             public:
              enum {
                mid_compareTo_73ef5c88fa79f2d9,
                mid_equals_460c5e2d9d51c6cc,
                mid_getDate_c325492395d89b24,
                mid_hashCode_55546ef6a647f39b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractSolarActivityDataLoader$LineParameters(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractSolarActivityDataLoader$LineParameters(const AbstractSolarActivityDataLoader$LineParameters& obj) : ::java::lang::Object(obj) {}

              jint compareTo(const AbstractSolarActivityDataLoader$LineParameters &) const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::orekit::time::AbsoluteDate getDate() const;
              jint hashCode() const;
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            extern PyType_Def PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters);
            extern PyTypeObject *PY_TYPE(AbstractSolarActivityDataLoader$LineParameters);

            class t_AbstractSolarActivityDataLoader$LineParameters {
            public:
              PyObject_HEAD
              AbstractSolarActivityDataLoader$LineParameters object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AbstractSolarActivityDataLoader$LineParameters&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AbstractSolarActivityDataLoader$LineParameters&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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

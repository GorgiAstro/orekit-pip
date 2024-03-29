#ifndef org_orekit_models_earth_atmosphere_data_AbstractSolarActivityDataLoader$LineParameters_H
#define org_orekit_models_earth_atmosphere_data_AbstractSolarActivityDataLoader$LineParameters_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class AbstractSolarActivityDataLoader$LineParameters;
          }
        }
      }
    }
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
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
                mid_compareTo_8b843ae7da66c9f6,
                mid_equals_72faff9b05f5ed5e,
                mid_getDate_80e11148db499dda,
                mid_hashCode_d6ab429752e7c267,
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

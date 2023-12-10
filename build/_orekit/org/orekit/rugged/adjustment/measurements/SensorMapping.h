#ifndef org_orekit_rugged_adjustment_measurements_SensorMapping_H
#define org_orekit_rugged_adjustment_measurements_SensorMapping_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        class SensorPixel;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          class SensorMapping : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e939c6558ae8d313,
              mid_init$_96073c87872b7a97,
              mid_addMapping_c421259283de3da0,
              mid_getMapping_e9e1a6780fe94297,
              mid_getRuggedName_0090f7797e403f43,
              mid_getSensorName_0090f7797e403f43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SensorMapping(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SensorMapping(const SensorMapping& obj) : ::java::lang::Object(obj) {}

            SensorMapping(const ::java::lang::String &);
            SensorMapping(const ::java::lang::String &, const ::java::lang::String &);

            void addMapping(const ::org::orekit::rugged::linesensor::SensorPixel &, const ::java::lang::Object &) const;
            ::java::util::Set getMapping() const;
            ::java::lang::String getRuggedName() const;
            ::java::lang::String getSensorName() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          extern PyType_Def PY_TYPE_DEF(SensorMapping);
          extern PyTypeObject *PY_TYPE(SensorMapping);

          class t_SensorMapping {
          public:
            PyObject_HEAD
            SensorMapping object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SensorMapping *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SensorMapping&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SensorMapping&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif

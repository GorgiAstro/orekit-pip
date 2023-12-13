#ifndef org_orekit_files_rinex_navigation_RegionCode_H
#define org_orekit_files_rinex_navigation_RegionCode_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class RegionCode;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class RegionCode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_d837002753842c6c,
              mid_values_16c795d26a64915a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RegionCode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RegionCode(const RegionCode& obj) : ::java::lang::Enum(obj) {}

            static RegionCode *JAPAN;
            static RegionCode *WIDE_AREA;

            static RegionCode valueOf(const ::java::lang::String &);
            static JArray< RegionCode > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(RegionCode);
          extern PyTypeObject *PY_TYPE(RegionCode);

          class t_RegionCode {
          public:
            PyObject_HEAD
            RegionCode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RegionCode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RegionCode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RegionCode&, PyTypeObject *);
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

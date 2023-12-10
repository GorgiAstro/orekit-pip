#ifndef org_orekit_files_ccsds_definitions_TimeSystem_H
#define org_orekit_files_ccsds_definitions_TimeSystem_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeSystem;
          class TimeConverter;
        }
        namespace utils {
          class ContextBinding;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          class TimeSystem : public ::java::lang::Enum {
           public:
            enum {
              mid_getConverter_b8995fcca635d467,
              mid_parse_fa88e9840d34f3e2,
              mid_valueOf_fa88e9840d34f3e2,
              mid_values_2dfeb0e284ed5b9e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TimeSystem(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TimeSystem(const TimeSystem& obj) : ::java::lang::Enum(obj) {}

            static TimeSystem *GMST;
            static TimeSystem *GPS;
            static TimeSystem *MET;
            static TimeSystem *MRT;
            static TimeSystem *SCLK;
            static TimeSystem *TAI;
            static TimeSystem *TCB;
            static TimeSystem *TCG;
            static TimeSystem *TDB;
            static TimeSystem *TT;
            static TimeSystem *UT1;
            static TimeSystem *UTC;

            ::org::orekit::files::ccsds::definitions::TimeConverter getConverter(const ::org::orekit::files::ccsds::utils::ContextBinding &) const;
            static TimeSystem parse(const ::java::lang::String &);
            static TimeSystem valueOf(const ::java::lang::String &);
            static JArray< TimeSystem > values();
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
      namespace ccsds {
        namespace definitions {
          extern PyType_Def PY_TYPE_DEF(TimeSystem);
          extern PyTypeObject *PY_TYPE(TimeSystem);

          class t_TimeSystem {
          public:
            PyObject_HEAD
            TimeSystem object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TimeSystem *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TimeSystem&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TimeSystem&, PyTypeObject *);
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

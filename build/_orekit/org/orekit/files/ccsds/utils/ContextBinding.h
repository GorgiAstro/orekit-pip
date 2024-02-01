#ifndef org_orekit_files_ccsds_utils_ContextBinding_H
#define org_orekit_files_ccsds_utils_ContextBinding_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeSystem;
        }
        namespace ndm {
          class ParsedUnitsBehavior;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          class ContextBinding : public ::java::lang::Object {
           public:
            enum {
              mid_getClockCount_9981f74b2d109da6,
              mid_getClockRate_9981f74b2d109da6,
              mid_getConventions_635853a14837ea6f,
              mid_getDataContext_66ee964ea58dd871,
              mid_getParsedUnitsBehavior_2cdcf2c78bfe02b7,
              mid_getReferenceDate_80e11148db499dda,
              mid_getTimeSystem_d72479bc3d5515c9,
              mid_isSimpleEOP_eee3de00fe971136,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ContextBinding(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ContextBinding(const ContextBinding& obj) : ::java::lang::Object(obj) {}

            jdouble getClockCount() const;
            jdouble getClockRate() const;
            ::org::orekit::utils::IERSConventions getConventions() const;
            ::org::orekit::data::DataContext getDataContext() const;
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior getParsedUnitsBehavior() const;
            ::org::orekit::time::AbsoluteDate getReferenceDate() const;
            ::org::orekit::files::ccsds::definitions::TimeSystem getTimeSystem() const;
            jboolean isSimpleEOP() const;
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
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(ContextBinding);
          extern PyTypeObject *PY_TYPE(ContextBinding);

          class t_ContextBinding {
          public:
            PyObject_HEAD
            ContextBinding object;
            static PyObject *wrap_Object(const ContextBinding&);
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

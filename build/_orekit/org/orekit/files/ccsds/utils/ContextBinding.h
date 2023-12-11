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
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace data {
      class DataContext;
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
              mid_getClockCount_557b8123390d8d0c,
              mid_getClockRate_557b8123390d8d0c,
              mid_getConventions_690653480c12ac72,
              mid_getDataContext_b259b25d6495e5b3,
              mid_getParsedUnitsBehavior_430d6c1485d1d8cb,
              mid_getReferenceDate_7a97f7e149e79afb,
              mid_getTimeSystem_d0d0dc777cc1d8f8,
              mid_isSimpleEOP_89b302893bdbe1f1,
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

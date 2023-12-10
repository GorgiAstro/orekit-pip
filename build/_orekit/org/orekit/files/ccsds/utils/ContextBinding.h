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
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
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
              mid_getClockCount_456d9a2f64d6b28d,
              mid_getClockRate_456d9a2f64d6b28d,
              mid_getConventions_f657aa17e72227da,
              mid_getDataContext_fc8fc85e38e59042,
              mid_getParsedUnitsBehavior_edbef281f8882e84,
              mid_getReferenceDate_aaa854c403487cf3,
              mid_getTimeSystem_8ece93c6c1ece30e,
              mid_isSimpleEOP_e470b6d9e0d979db,
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

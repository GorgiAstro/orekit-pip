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
              mid_getClockCount_dff5885c2c873297,
              mid_getClockRate_dff5885c2c873297,
              mid_getConventions_60f9ded87ab7ca4c,
              mid_getDataContext_0b7cf48ee6a922ee,
              mid_getParsedUnitsBehavior_8df14555f7513c0c,
              mid_getReferenceDate_85703d13e302437e,
              mid_getTimeSystem_ee0a6b60b63a969e,
              mid_isSimpleEOP_b108b35ef48e27bd,
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

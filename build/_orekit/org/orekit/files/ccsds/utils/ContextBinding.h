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
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
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
              mid_getClockCount_b74f83833fdad017,
              mid_getClockRate_b74f83833fdad017,
              mid_getConventions_53aaf70620a914af,
              mid_getDataContext_687c2d3d1010744e,
              mid_getParsedUnitsBehavior_b86f6bf8371fab43,
              mid_getReferenceDate_c325492395d89b24,
              mid_getTimeSystem_91b7f51e80ad440f,
              mid_isSimpleEOP_9ab94ac1dc23b105,
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

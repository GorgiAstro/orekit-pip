#ifndef org_orekit_files_ilrs_CRDParser_H
#define org_orekit_files_ilrs_CRDParser_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRD;
      }
    }
    namespace data {
      class DataSource;
    }
    namespace time {
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRDParser : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_7cb2659f4799e4d2,
            mid_getTimeScale_5e2cac12ab8da943,
            mid_parse_1826a80a322e280c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDParser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDParser(const CRDParser& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *DEFAULT_CRD_SUPPORTED_NAMES;

          CRDParser();
          CRDParser(const ::org::orekit::time::TimeScale &);

          ::org::orekit::time::TimeScale getTimeScale() const;
          ::org::orekit::files::ilrs::CRD parse(const ::org::orekit::data::DataSource &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CRDParser);
        extern PyTypeObject *PY_TYPE(CRDParser);

        class t_CRDParser {
        public:
          PyObject_HEAD
          CRDParser object;
          static PyObject *wrap_Object(const CRDParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

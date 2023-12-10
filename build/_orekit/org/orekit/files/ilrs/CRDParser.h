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
    namespace data {
      class DataSource;
    }
    namespace files {
      namespace ilrs {
        class CRD;
      }
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
            mid_init$_0fa09c18fee449d5,
            mid_init$_e93d77ad761aa1f2,
            mid_getTimeScale_c39031284193adbe,
            mid_parse_7379f847dad0aeed,
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

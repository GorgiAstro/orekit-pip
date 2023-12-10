#ifndef org_orekit_files_ilrs_CPFParser_H
#define org_orekit_files_ilrs_CPFParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFileParser;
      }
      namespace ilrs {
        class CPF;
      }
    }
    namespace time {
      class TimeScale;
    }
    namespace frames {
      class Frames;
    }
    namespace data {
      class DataSource;
    }
    namespace utils {
      class IERSConventions;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CPFParser : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_d5a18dcb3f2a834f,
            mid_parse_d6e3c1772e77553f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CPFParser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CPFParser(const CPFParser& obj) : ::java::lang::Object(obj) {}

          CPFParser();
          CPFParser(jdouble, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::Frames &);

          ::org::orekit::files::ilrs::CPF parse(const ::org::orekit::data::DataSource &) const;
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
        extern PyType_Def PY_TYPE_DEF(CPFParser);
        extern PyTypeObject *PY_TYPE(CPFParser);

        class t_CPFParser {
        public:
          PyObject_HEAD
          CPFParser object;
          static PyObject *wrap_Object(const CPFParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

#ifndef org_orekit_files_rinex_RinexFile_H
#define org_orekit_files_rinex_RinexFile_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {
          class RinexBaseHeader;
          class RinexComment;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        class RinexFile : public ::java::lang::Object {
         public:
          enum {
            mid_addComment_633243bab5f73a6a,
            mid_getComments_a6156df500549a58,
            mid_getHeader_56bd6189f87702f0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RinexFile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RinexFile(const RinexFile& obj) : ::java::lang::Object(obj) {}

          void addComment(const ::org::orekit::files::rinex::section::RinexComment &) const;
          ::java::util::List getComments() const;
          ::org::orekit::files::rinex::section::RinexBaseHeader getHeader() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        extern PyType_Def PY_TYPE_DEF(RinexFile);
        extern PyTypeObject *PY_TYPE(RinexFile);

        class t_RinexFile {
        public:
          PyObject_HEAD
          RinexFile object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RinexFile *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RinexFile&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RinexFile&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

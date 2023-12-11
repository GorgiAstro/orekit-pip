#ifndef org_orekit_files_ccsds_ndm_Ndm_H
#define org_orekit_files_ccsds_ndm_Ndm_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class NdmConstituent;
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
        namespace ndm {

          class Ndm : public ::java::lang::Object {
           public:
            enum {
              mid_init$_aaa4588ba4c2491b,
              mid_getComments_0d9551367f7ecdef,
              mid_getConstituents_0d9551367f7ecdef,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Ndm(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Ndm(const Ndm& obj) : ::java::lang::Object(obj) {}

            Ndm(const ::java::util::List &, const ::java::util::List &);

            ::java::util::List getComments() const;
            ::java::util::List getConstituents() const;
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
        namespace ndm {
          extern PyType_Def PY_TYPE_DEF(Ndm);
          extern PyTypeObject *PY_TYPE(Ndm);

          class t_Ndm {
          public:
            PyObject_HEAD
            Ndm object;
            static PyObject *wrap_Object(const Ndm&);
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

#ifndef org_orekit_files_ccsds_section_CommentsContainer_H
#define org_orekit_files_ccsds_section_CommentsContainer_H

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
        namespace section {
          class Section;
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
        namespace section {

          class CommentsContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_acceptComments_e470b6d9e0d979db,
              mid_addComment_6b161f495ea569b8,
              mid_checkAllowed_cb83b8411211f2d4,
              mid_checkNotNaN_12e361efba6cf261,
              mid_checkNotNegative_46ad99eaf34b9cef,
              mid_checkNotNull_9c0483a41eed4e2f,
              mid_getComments_a6156df500549a58,
              mid_refuseFurtherComments_7ae3461a92a43152,
              mid_validate_77e0f9a1f260e2e5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommentsContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CommentsContainer(const CommentsContainer& obj) : ::java::lang::Object(obj) {}

            CommentsContainer();

            jboolean acceptComments() const;
            jboolean addComment(const ::java::lang::String &) const;
            void checkAllowed(jdouble, const ::java::lang::Object &, const ::java::lang::String &, jdouble, jdouble) const;
            void checkNotNaN(jdouble, const ::java::lang::String &) const;
            void checkNotNegative(jint, const ::java::lang::String &) const;
            void checkNotNull(const ::java::lang::Object &, const ::java::lang::String &) const;
            ::java::util::List getComments() const;
            void refuseFurtherComments() const;
            void validate(jdouble) const;
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
        namespace section {
          extern PyType_Def PY_TYPE_DEF(CommentsContainer);
          extern PyTypeObject *PY_TYPE(CommentsContainer);

          class t_CommentsContainer {
          public:
            PyObject_HEAD
            CommentsContainer object;
            static PyObject *wrap_Object(const CommentsContainer&);
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

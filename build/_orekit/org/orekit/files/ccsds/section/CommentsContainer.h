#ifndef org_orekit_files_ccsds_section_CommentsContainer_H
#define org_orekit_files_ccsds_section_CommentsContainer_H

#include "java/lang/Object.h"

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
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
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
              mid_init$_0640e6acf969ed28,
              mid_acceptComments_89b302893bdbe1f1,
              mid_addComment_fd2162b8a05a22fe,
              mid_checkAllowed_5ebcb2d7669fd61d,
              mid_checkNotNaN_d159d90d402c6e37,
              mid_checkNotNegative_da9d52f3cfda13c8,
              mid_checkNotNull_d4801ac1961ee2ac,
              mid_getComments_0d9551367f7ecdef,
              mid_refuseFurtherComments_0640e6acf969ed28,
              mid_validate_10f281d777284cea,
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

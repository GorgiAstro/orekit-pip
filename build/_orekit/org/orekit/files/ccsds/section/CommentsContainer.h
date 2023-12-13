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
              mid_init$_a1fa5dae97ea5ed2,
              mid_acceptComments_9ab94ac1dc23b105,
              mid_addComment_cde6b28e15c96b75,
              mid_checkAllowed_62d478fa88e6e695,
              mid_checkNotNaN_e870be4439f1c3c6,
              mid_checkNotNegative_5817b937d38eafc1,
              mid_checkNotNull_337032593daab958,
              mid_getComments_e62d3bb06d56d7e3,
              mid_refuseFurtherComments_a1fa5dae97ea5ed2,
              mid_validate_8ba9fe7a847cecad,
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

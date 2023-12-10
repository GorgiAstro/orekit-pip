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
              mid_init$_0fa09c18fee449d5,
              mid_acceptComments_b108b35ef48e27bd,
              mid_addComment_7edad2c2f64f4d68,
              mid_checkAllowed_245681ee2b0284d9,
              mid_checkNotNaN_0f9c4af43dc22978,
              mid_checkNotNegative_eb545b81bcb6baba,
              mid_checkNotNull_f535a727b347df63,
              mid_getComments_2afa36052df4765d,
              mid_refuseFurtherComments_0fa09c18fee449d5,
              mid_validate_17db3a65980d3441,
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

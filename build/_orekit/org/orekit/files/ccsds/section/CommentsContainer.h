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
              mid_init$_ff7cb6c242604316,
              mid_acceptComments_eee3de00fe971136,
              mid_addComment_df4c65b2aede5c41,
              mid_checkAllowed_2acd45577021002d,
              mid_checkNotNaN_1bad5b063c51df2e,
              mid_checkNotNegative_a3e920ca64bbfb6f,
              mid_checkNotNull_be4a5a109766127d,
              mid_getComments_d751c1a57012b438,
              mid_refuseFurtherComments_ff7cb6c242604316,
              mid_validate_1ad26e8c8c0cd65b,
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

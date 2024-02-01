#ifndef org_orekit_files_ccsds_ndm_NdmWriter_H
#define org_orekit_files_ccsds_ndm_NdmWriter_H

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
      namespace ccsds {
        namespace ndm {
          class WriterBuilder;
          class NdmConstituent;
          class Ndm;
        }
        namespace utils {
          namespace generation {
            class Generator;
          }
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

          class NdmWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6e2761ea0b74d795,
              mid_writeComment_5e4275dce230c0e8,
              mid_writeConstituent_d663c14e7d793f18,
              mid_writeMessage_10305fadb6258b85,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NdmWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NdmWriter(const NdmWriter& obj) : ::java::lang::Object(obj) {}

            NdmWriter(const ::org::orekit::files::ccsds::ndm::WriterBuilder &);

            void writeComment(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::java::lang::String &) const;
            void writeConstituent(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::NdmConstituent &) const;
            void writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::Ndm &) const;
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
          extern PyType_Def PY_TYPE_DEF(NdmWriter);
          extern PyTypeObject *PY_TYPE(NdmWriter);

          class t_NdmWriter {
          public:
            PyObject_HEAD
            NdmWriter object;
            static PyObject *wrap_Object(const NdmWriter&);
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

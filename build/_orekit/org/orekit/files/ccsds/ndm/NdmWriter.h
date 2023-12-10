#ifndef org_orekit_files_ccsds_ndm_NdmWriter_H
#define org_orekit_files_ccsds_ndm_NdmWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class NdmConstituent;
          class Ndm;
          class WriterBuilder;
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
namespace java {
  namespace io {
    class IOException;
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
        namespace ndm {

          class NdmWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_699707fca779db0b,
              mid_writeComment_dd2e2df417b602ab,
              mid_writeConstituent_0998ca77618694ad,
              mid_writeMessage_1f6f6f587e5afd97,
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

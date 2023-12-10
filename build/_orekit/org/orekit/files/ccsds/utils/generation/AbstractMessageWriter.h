#ifndef org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H
#define org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H

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
        namespace section {
          class Segment;
          class Header;
        }
        namespace utils {
          namespace generation {
            class MessageWriter;
            class Generator;
          }
          class ContextBinding;
        }
        namespace ndm {
          class NdmConstituent;
        }
        namespace definitions {
          class TimeConverter;
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
        namespace utils {
          namespace generation {

            class AbstractMessageWriter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_478a9a59660d41ab,
                mid_getContext_21a51eed276d81e3,
                mid_getDefaultVersion_456d9a2f64d6b28d,
                mid_getFormatVersionKey_0090f7797e403f43,
                mid_getRoot_0090f7797e403f43,
                mid_getTimeConverter_131aec6eeceff57f,
                mid_getVersion_456d9a2f64d6b28d,
                mid_setContext_b23a8b8e76c44cd4,
                mid_writeFooter_fb36c2e4ae059ab9,
                mid_writeHeader_31a4dd6b0c8635b6,
                mid_writeSegment_412320e9d7a2723d,
                mid_writeSegmentContent_17bd99da1e106002,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractMessageWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractMessageWriter(const AbstractMessageWriter& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *DEFAULT_ORIGINATOR;

              AbstractMessageWriter(const ::java::lang::String &, const ::java::lang::String &, jdouble, const ::org::orekit::files::ccsds::utils::ContextBinding &);

              ::org::orekit::files::ccsds::utils::ContextBinding getContext() const;
              jdouble getDefaultVersion() const;
              ::java::lang::String getFormatVersionKey() const;
              ::java::lang::String getRoot() const;
              ::org::orekit::files::ccsds::definitions::TimeConverter getTimeConverter() const;
              jdouble getVersion() const;
              void setContext(const ::org::orekit::files::ccsds::utils::ContextBinding &) const;
              void writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator &) const;
              void writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::section::Header &) const;
              void writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::section::Segment &) const;
            };
          }
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
        namespace utils {
          namespace generation {
            extern PyType_Def PY_TYPE_DEF(AbstractMessageWriter);
            extern PyTypeObject *PY_TYPE(AbstractMessageWriter);

            class t_AbstractMessageWriter {
            public:
              PyObject_HEAD
              AbstractMessageWriter object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_AbstractMessageWriter *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AbstractMessageWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AbstractMessageWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif

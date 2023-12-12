#ifndef org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H
#define org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Header;
          class Segment;
        }
        namespace utils {
          class ContextBinding;
          namespace generation {
            class MessageWriter;
            class Generator;
          }
        }
        namespace definitions {
          class TimeConverter;
        }
        namespace ndm {
          class NdmConstituent;
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
        namespace utils {
          namespace generation {

            class AbstractMessageWriter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_17d2c89957221da8,
                mid_getContext_cfb32720392d108f,
                mid_getDefaultVersion_557b8123390d8d0c,
                mid_getFormatVersionKey_3cffd47377eca18a,
                mid_getRoot_3cffd47377eca18a,
                mid_getTimeConverter_98138020b4258bf0,
                mid_getVersion_557b8123390d8d0c,
                mid_setContext_f673e6e131e83586,
                mid_writeFooter_0503da09b1f1eb3c,
                mid_writeHeader_9c5c2ece653aa3f3,
                mid_writeSegment_c15b5f80625a03e0,
                mid_writeSegmentContent_e9836ce27ccfe3b9,
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

#ifndef org_orekit_files_ccsds_ndm_odm_ocm_StreamingOcmWriter$BlockWriter_H
#define org_orekit_files_ccsds_ndm_odm_ocm_StreamingOcmWriter$BlockWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitFixedStepHandler;
      }
      class SpacecraftState;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class StreamingOcmWriter;
            }
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              class StreamingOcmWriter$BlockWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_af74e4ff342890ee,
                  mid_finish_2b88003f931f70a7,
                  mid_handleStep_2b88003f931f70a7,
                  mid_init_703918df646bd2ae,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StreamingOcmWriter$BlockWriter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StreamingOcmWriter$BlockWriter(const StreamingOcmWriter$BlockWriter& obj) : ::java::lang::Object(obj) {}

                StreamingOcmWriter$BlockWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter &);

                void finish(const ::org::orekit::propagation::SpacecraftState &) const;
                void handleStep(const ::org::orekit::propagation::SpacecraftState &) const;
                void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
              };
            }
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
        namespace ndm {
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(StreamingOcmWriter$BlockWriter);
              extern PyTypeObject *PY_TYPE(StreamingOcmWriter$BlockWriter);

              class t_StreamingOcmWriter$BlockWriter {
              public:
                PyObject_HEAD
                StreamingOcmWriter$BlockWriter object;
                static PyObject *wrap_Object(const StreamingOcmWriter$BlockWriter&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif

#ifndef org_orekit_files_rinex_observation_RinexObservationWriter_H
#define org_orekit_files_rinex_observation_RinexObservationWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
  namespace lang {
    class AutoCloseable;
    class Appendable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class RinexObservation;
          class RinexObservationHeader;
          class ObservationDataSet;
        }
        namespace section {
          class RinexComment;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          class RinexObservationWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e39e830a0f55c9db,
              mid_close_7ae3461a92a43152,
              mid_prepareComments_65de9727799c5641,
              mid_writeCompleteFile_31f7edc5a6aad656,
              mid_writeHeader_581bd9eb401a3c81,
              mid_writeObservationDataSet_a74883e6a7063961,
              mid_writePendingRinex2Observations_7ae3461a92a43152,
              mid_writePendingRinex34Observations_7ae3461a92a43152,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexObservationWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexObservationWriter(const RinexObservationWriter& obj) : ::java::lang::Object(obj) {}

            RinexObservationWriter(const ::java::lang::Appendable &, const ::java::lang::String &);

            void close() const;
            void prepareComments(const ::java::util::List &) const;
            void writeCompleteFile(const ::org::orekit::files::rinex::observation::RinexObservation &) const;
            void writeHeader(const ::org::orekit::files::rinex::observation::RinexObservationHeader &) const;
            void writeObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet &) const;
            void writePendingRinex2Observations() const;
            void writePendingRinex34Observations() const;
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
      namespace rinex {
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(RinexObservationWriter);
          extern PyTypeObject *PY_TYPE(RinexObservationWriter);

          class t_RinexObservationWriter {
          public:
            PyObject_HEAD
            RinexObservationWriter object;
            static PyObject *wrap_Object(const RinexObservationWriter&);
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

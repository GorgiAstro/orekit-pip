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
              mid_init$_07ec9ab68c2ac844,
              mid_close_0640e6acf969ed28,
              mid_prepareComments_4ccaedadb068bdeb,
              mid_writeCompleteFile_e605781ac255bbd3,
              mid_writeHeader_3d74ba4f9e2b8c95,
              mid_writeObservationDataSet_7cae3eafa8e6978c,
              mid_writePendingRinex2Observations_0640e6acf969ed28,
              mid_writePendingRinex34Observations_0640e6acf969ed28,
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

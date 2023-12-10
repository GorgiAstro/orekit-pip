#ifndef org_orekit_files_rinex_observation_RinexObservationWriter_H
#define org_orekit_files_rinex_observation_RinexObservationWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {
          class RinexComment;
        }
        namespace observation {
          class RinexObservation;
          class ObservationDataSet;
          class RinexObservationHeader;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class AutoCloseable;
    class Appendable;
    class Class;
    class String;
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
              mid_init$_580b43eb7b580d53,
              mid_close_0fa09c18fee449d5,
              mid_prepareComments_de3e021e7266b71e,
              mid_writeCompleteFile_f5988098843867b2,
              mid_writeHeader_2b1813bb25ab1e9c,
              mid_writeObservationDataSet_5e249044f63168db,
              mid_writePendingRinex2Observations_0fa09c18fee449d5,
              mid_writePendingRinex34Observations_0fa09c18fee449d5,
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

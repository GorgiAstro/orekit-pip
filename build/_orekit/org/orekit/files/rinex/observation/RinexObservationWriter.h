#ifndef org_orekit_files_rinex_observation_RinexObservationWriter_H
#define org_orekit_files_rinex_observation_RinexObservationWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class AutoCloseable;
    class Appendable;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {
          class RinexComment;
        }
        namespace observation {
          class RinexObservation;
          class RinexObservationHeader;
          class ObservationDataSet;
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
              mid_init$_6c867c4eb16d43be,
              mid_close_a1fa5dae97ea5ed2,
              mid_prepareComments_0e7c3032c7c93ed3,
              mid_writeCompleteFile_3e40490b82a3a9b3,
              mid_writeHeader_3d7d1c3eb6e2d8e5,
              mid_writeObservationDataSet_e95b94a72b1c921a,
              mid_writePendingRinex2Observations_a1fa5dae97ea5ed2,
              mid_writePendingRinex34Observations_a1fa5dae97ea5ed2,
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

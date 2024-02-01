#ifndef org_orekit_files_rinex_observation_RinexObservationWriter_H
#define org_orekit_files_rinex_observation_RinexObservationWriter_H

#include "java/lang/Object.h"

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
              mid_init$_8340f43d6268953f,
              mid_close_ff7cb6c242604316,
              mid_prepareComments_aa335fea495d60e0,
              mid_writeCompleteFile_2e16d500654da8ad,
              mid_writeHeader_f11a530af626ae4b,
              mid_writeObservationDataSet_d75e9b743ecf20cb,
              mid_writePendingRinex2Observations_ff7cb6c242604316,
              mid_writePendingRinex34Observations_ff7cb6c242604316,
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

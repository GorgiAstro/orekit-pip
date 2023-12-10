#ifndef org_orekit_gnss_Frequency_H
#define org_orekit_gnss_Frequency_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class Frequency;
      class SatelliteSystem;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class Frequency : public ::java::lang::Enum {
       public:
        enum {
          mid_getMHzFrequency_456d9a2f64d6b28d,
          mid_getName_0090f7797e403f43,
          mid_getRatio_456d9a2f64d6b28d,
          mid_getSatelliteSystem_1b72fcc8f550bfc7,
          mid_getWavelength_456d9a2f64d6b28d,
          mid_valueOf_59da85d6220c7837,
          mid_values_5156f52fac3e4acd,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Frequency(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Frequency(const Frequency& obj) : ::java::lang::Enum(obj) {}

        static Frequency *B01;
        static Frequency *B02;
        static Frequency *B03;
        static Frequency *B08;
        static Frequency *B1A;
        static Frequency *B1C;
        static Frequency *B2A;
        static Frequency *B2B;
        static Frequency *B3A;
        static Frequency *C01;
        static Frequency *C02;
        static Frequency *C05;
        static Frequency *C06;
        static Frequency *C07;
        static Frequency *C08;
        static Frequency *E01;
        static Frequency *E05;
        static Frequency *E06;
        static Frequency *E07;
        static Frequency *E08;
        static jdouble F0;
        static Frequency *G01;
        static Frequency *G02;
        static Frequency *G05;
        static Frequency *I05;
        static Frequency *I09;
        static Frequency *J01;
        static Frequency *J02;
        static Frequency *J05;
        static Frequency *J06;
        static Frequency *R01;
        static Frequency *R02;
        static Frequency *R03;
        static Frequency *R04;
        static Frequency *R06;
        static Frequency *S01;
        static Frequency *S05;

        jdouble getMHzFrequency() const;
        ::java::lang::String getName() const;
        jdouble getRatio() const;
        ::org::orekit::gnss::SatelliteSystem getSatelliteSystem() const;
        jdouble getWavelength() const;
        static Frequency valueOf(const ::java::lang::String &);
        static JArray< Frequency > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(Frequency);
      extern PyTypeObject *PY_TYPE(Frequency);

      class t_Frequency {
      public:
        PyObject_HEAD
        Frequency object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Frequency *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Frequency&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Frequency&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

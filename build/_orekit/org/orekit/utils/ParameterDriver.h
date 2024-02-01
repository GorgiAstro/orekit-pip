#ifndef org_orekit_utils_ParameterDriver_H
#define org_orekit_utils_ParameterDriver_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Integer;
    class Double;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterObserver;
      class TimeSpanMap;
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_628c7a380d836cba,
          mid_init$_ae8d41aac6be4b62,
          mid_addObserver_527bf64f7d280e07,
          mid_addSpanAtDate_8497861b879c83f7,
          mid_addSpans_05fe71f75ead48fc,
          mid_getMaxValue_9981f74b2d109da6,
          mid_getMinValue_9981f74b2d109da6,
          mid_getName_d2c8eb4129821f0e,
          mid_getNameSpan_6989a51b7b3249aa,
          mid_getNamesSpanMap_d11c7ec0e313e33d,
          mid_getNbOfValues_d6ab429752e7c267,
          mid_getNormalizedValue_9981f74b2d109da6,
          mid_getNormalizedValue_209f08246d708042,
          mid_getObservers_d751c1a57012b438,
          mid_getReferenceDate_80e11148db499dda,
          mid_getReferenceValue_9981f74b2d109da6,
          mid_getScale_9981f74b2d109da6,
          mid_getTransitionDates_1020504549d5f668,
          mid_getValue_9981f74b2d109da6,
          mid_getValue_209f08246d708042,
          mid_getValue_52600281d0133d08,
          mid_getValue_aef63685d22d4c3c,
          mid_getValueContinuousEstimation_209f08246d708042,
          mid_getValueSpanMap_d11c7ec0e313e33d,
          mid_getValueStepEstimation_209f08246d708042,
          mid_getValues_be783177b060994b,
          mid_isContinuousEstimation_eee3de00fe971136,
          mid_isSelected_eee3de00fe971136,
          mid_removeObserver_527bf64f7d280e07,
          mid_replaceObserver_e8442ae8bbe7cb5e,
          mid_setContinuousEstimation_b35db77cae58639e,
          mid_setMaxValue_1ad26e8c8c0cd65b,
          mid_setMinValue_1ad26e8c8c0cd65b,
          mid_setName_105e1eadb709d9ac,
          mid_setNormalizedValue_1ad26e8c8c0cd65b,
          mid_setNormalizedValue_281401e03841f11f,
          mid_setReferenceDate_8497861b879c83f7,
          mid_setReferenceValue_1ad26e8c8c0cd65b,
          mid_setScale_1ad26e8c8c0cd65b,
          mid_setSelected_b35db77cae58639e,
          mid_setValue_1ad26e8c8c0cd65b,
          mid_setValue_281401e03841f11f,
          mid_setValueSpanMap_680e005705d5f0aa,
          mid_toString_d2c8eb4129821f0e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterDriver(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterDriver(const ParameterDriver& obj) : ::java::lang::Object(obj) {}

        ParameterDriver(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
        ParameterDriver(const ::java::lang::String &, const ::org::orekit::utils::TimeSpanMap &, const ::org::orekit::utils::TimeSpanMap &, jdouble, jdouble, jdouble, jdouble);

        void addObserver(const ::org::orekit::utils::ParameterObserver &) const;
        void addSpanAtDate(const ::org::orekit::time::AbsoluteDate &) const;
        void addSpans(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
        jdouble getMaxValue() const;
        jdouble getMinValue() const;
        ::java::lang::String getName() const;
        ::java::lang::String getNameSpan(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::TimeSpanMap getNamesSpanMap() const;
        jint getNbOfValues() const;
        jdouble getNormalizedValue() const;
        jdouble getNormalizedValue(const ::org::orekit::time::AbsoluteDate &) const;
        ::java::util::List getObservers() const;
        ::org::orekit::time::AbsoluteDate getReferenceDate() const;
        jdouble getReferenceValue() const;
        jdouble getScale() const;
        JArray< ::org::orekit::time::AbsoluteDate > getTransitionDates() const;
        jdouble getValue() const;
        jdouble getValue(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::analysis::differentiation::Gradient getValue(jint, const ::java::util::Map &) const;
        ::org::hipparchus::analysis::differentiation::Gradient getValue(jint, const ::java::util::Map &, const ::org::orekit::time::AbsoluteDate &) const;
        jdouble getValueContinuousEstimation(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::TimeSpanMap getValueSpanMap() const;
        jdouble getValueStepEstimation(const ::org::orekit::time::AbsoluteDate &) const;
        JArray< jdouble > getValues() const;
        jboolean isContinuousEstimation() const;
        jboolean isSelected() const;
        void removeObserver(const ::org::orekit::utils::ParameterObserver &) const;
        void replaceObserver(const ::org::orekit::utils::ParameterObserver &, const ::org::orekit::utils::ParameterObserver &) const;
        void setContinuousEstimation(jboolean) const;
        void setMaxValue(jdouble) const;
        void setMinValue(jdouble) const;
        void setName(const ::java::lang::String &) const;
        void setNormalizedValue(jdouble) const;
        void setNormalizedValue(jdouble, const ::org::orekit::time::AbsoluteDate &) const;
        void setReferenceDate(const ::org::orekit::time::AbsoluteDate &) const;
        void setReferenceValue(jdouble) const;
        void setScale(jdouble) const;
        void setSelected(jboolean) const;
        void setValue(jdouble) const;
        void setValue(jdouble, const ::org::orekit::time::AbsoluteDate &) const;
        void setValueSpanMap(const ParameterDriver &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ParameterDriver);
      extern PyTypeObject *PY_TYPE(ParameterDriver);

      class t_ParameterDriver {
      public:
        PyObject_HEAD
        ParameterDriver object;
        static PyObject *wrap_Object(const ParameterDriver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

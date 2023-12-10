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
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class ParameterObserver;
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
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
          mid_init$_09f2813532e594da,
          mid_init$_96cc451b9ef9ee86,
          mid_addObserver_beaf65de1f6a41ab,
          mid_addSpanAtDate_600a2a61652bc473,
          mid_addSpans_da69b15169b809c3,
          mid_getMaxValue_dff5885c2c873297,
          mid_getMinValue_dff5885c2c873297,
          mid_getName_11b109bd155ca898,
          mid_getNameSpan_22dfbc0bf613c8d6,
          mid_getNamesSpanMap_62c7757711639c83,
          mid_getNbOfValues_570ce0828f81a2c1,
          mid_getNormalizedValue_dff5885c2c873297,
          mid_getNormalizedValue_bf1d7732f1acb697,
          mid_getObservers_2afa36052df4765d,
          mid_getReferenceDate_85703d13e302437e,
          mid_getReferenceValue_dff5885c2c873297,
          mid_getScale_dff5885c2c873297,
          mid_getTransitionDates_4dd12f6fac20c51e,
          mid_getValue_dff5885c2c873297,
          mid_getValue_bf1d7732f1acb697,
          mid_getValue_6810b9d6ff563a3b,
          mid_getValue_e9b8f1c3e8e1bfec,
          mid_getValueContinuousEstimation_bf1d7732f1acb697,
          mid_getValueSpanMap_62c7757711639c83,
          mid_getValueStepEstimation_bf1d7732f1acb697,
          mid_getValues_60c7040667a7dc5c,
          mid_isContinuousEstimation_b108b35ef48e27bd,
          mid_isSelected_b108b35ef48e27bd,
          mid_removeObserver_beaf65de1f6a41ab,
          mid_replaceObserver_a1adb55e7004d222,
          mid_setContinuousEstimation_bd04c9335fb9e4cf,
          mid_setMaxValue_17db3a65980d3441,
          mid_setMinValue_17db3a65980d3441,
          mid_setName_d0bc48d5b00dc40c,
          mid_setNormalizedValue_17db3a65980d3441,
          mid_setNormalizedValue_a7786d9d355d3792,
          mid_setReferenceDate_600a2a61652bc473,
          mid_setReferenceValue_17db3a65980d3441,
          mid_setScale_17db3a65980d3441,
          mid_setSelected_bd04c9335fb9e4cf,
          mid_setValue_17db3a65980d3441,
          mid_setValue_a7786d9d355d3792,
          mid_setValueSpanMap_01a5c4b8230d6f04,
          mid_toString_11b109bd155ca898,
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

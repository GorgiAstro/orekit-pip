#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/BurstSelector.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *BurstSelector::class$ = NULL;
      jmethodID *BurstSelector::mids$ = NULL;
      bool BurstSelector::live$ = false;

      jclass BurstSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/BurstSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cb615059ae60dc02] = env->getMethodID(cls, "<init>", "(IDDLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_50850a0bb1306a34] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BurstSelector::BurstSelector(jint a0, jdouble a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb615059ae60dc02, a0, a1, a2, a3.this$)) {}

      ::java::util::List BurstSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_50850a0bb1306a34], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_BurstSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BurstSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BurstSelector_init_(t_BurstSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BurstSelector_selectDates(t_BurstSelector *self, PyObject *args);

      static PyMethodDef t_BurstSelector__methods_[] = {
        DECLARE_METHOD(t_BurstSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BurstSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BurstSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BurstSelector)[] = {
        { Py_tp_methods, t_BurstSelector__methods_ },
        { Py_tp_init, (void *) t_BurstSelector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BurstSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BurstSelector, t_BurstSelector, BurstSelector);

      void t_BurstSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(BurstSelector), &PY_TYPE_DEF(BurstSelector), module, "BurstSelector", 0);
      }

      void t_BurstSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "class_", make_descriptor(BurstSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "wrapfn_", make_descriptor(t_BurstSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BurstSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BurstSelector::initializeClass, 1)))
          return NULL;
        return t_BurstSelector::wrap_Object(BurstSelector(((t_BurstSelector *) arg)->object.this$));
      }
      static PyObject *t_BurstSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BurstSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BurstSelector_init_(t_BurstSelector *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::time::TimeScale a3((jobject) NULL);
        BurstSelector object((jobject) NULL);

        if (!parseArgs(args, "IDDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = BurstSelector(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BurstSelector_selectDates(t_BurstSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimationsProvider::class$ = NULL;
        jmethodID *EstimationsProvider::mids$ = NULL;
        bool EstimationsProvider::live$ = false;

        jclass EstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEstimatedMeasurement_9e3faa50e0df43fe] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_55546ef6a647f39b] = env->getMethodID(cls, "getNumber", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement EstimationsProvider::getEstimatedMeasurement(jint a0) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurement_9e3faa50e0df43fe], a0));
        }

        jint EstimationsProvider::getNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumber_55546ef6a647f39b]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg);
        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self);
        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data);
        static PyGetSetDef t_EstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimationsProvider, number),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_EstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, getEstimatedMeasurement, METH_O),
          DECLARE_METHOD(t_EstimationsProvider, getNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimationsProvider)[] = {
          { Py_tp_methods, t_EstimationsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimationsProvider, t_EstimationsProvider, EstimationsProvider);

        void t_EstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimationsProvider), &PY_TYPE_DEF(EstimationsProvider), module, "EstimationsProvider", 0);
        }

        void t_EstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "class_", make_descriptor(EstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "wrapfn_", make_descriptor(t_EstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_EstimationsProvider::wrap_Object(EstimationsProvider(((t_EstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getEstimatedMeasurement(a0));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEstimatedMeasurement", arg);
          return NULL;
        }

        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumber());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *AbstractGenerator::class$ = NULL;
            jmethodID *AbstractGenerator::mids$ = NULL;
            bool AbstractGenerator::live$ = false;

            jclass AbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/AbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c8f0b9579f6d133f] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_2352320e099b9531] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_2352320e099b9531] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_a97dc068e719c14c] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_11ae2994efd15504] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_enterSection_734b91ac30d5f9b4] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_1c1fa1e935d6cdcf] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getOutputName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_a1fa5dae97ea5ed2] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_6f0f3576df9f75ee] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_unitsListToString_ec48f6b9c20c08b3] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeEntry_20c2e4ef4663dfc7] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_f61f520115d82ef0] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_68be04607557ff44] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_06b2ed40d0cea8dd] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_09a7fd998b7aed89] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_6c986fa8f6aabe22] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_7b1b43161792cef8] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_df95ad02f5b4acd9] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_902d69c788edaf18] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");
                mids$[mid_writeUnits_c4dae8f6c826c849] = env->getMethodID(cls, "writeUnits", "(Lorg/orekit/utils/units/Unit;)Z");
                mids$[mid_complain_76cf8b957ccb7ae1] = env->getMethodID(cls, "complain", "(Ljava/lang/String;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractGenerator::AbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8f0b9579f6d133f, a0.this$, a1.this$, a2, a3)) {}

            void AbstractGenerator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
            }

            ::java::lang::String AbstractGenerator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_2352320e099b9531], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_2352320e099b9531], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_a97dc068e719c14c], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String AbstractGenerator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_11ae2994efd15504], a0));
            }

            void AbstractGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_734b91ac30d5f9b4], a0.this$);
            }

            ::java::lang::String AbstractGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String AbstractGenerator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_1c1fa1e935d6cdcf]));
            }

            void AbstractGenerator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_a1fa5dae97ea5ed2]);
            }

            ::java::lang::String AbstractGenerator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_6f0f3576df9f75ee], a0.this$));
            }

            ::java::lang::String AbstractGenerator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_ec48f6b9c20c08b3], a0.this$));
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_20c2e4ef4663dfc7], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_f61f520115d82ef0], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_68be04607557ff44], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_06b2ed40d0cea8dd], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_09a7fd998b7aed89], a0.this$, a1.this$, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_6c986fa8f6aabe22], a0.this$, a1, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_7b1b43161792cef8], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void AbstractGenerator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_df95ad02f5b4acd9], a0);
            }

            void AbstractGenerator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_902d69c788edaf18], a0.this$);
            }

            jboolean AbstractGenerator::writeUnits(const ::org::orekit::utils::units::Unit & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_writeUnits_c4dae8f6c826c849], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data);
            static PyGetSetDef t_AbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGenerator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_AbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, close, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, doubleToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, enterSection, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, unitsListToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeRawData, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeUnits, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGenerator)[] = {
              { Py_tp_methods, t_AbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_AbstractGenerator_init_ },
              { Py_tp_getset, t_AbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGenerator, t_AbstractGenerator, AbstractGenerator);

            void t_AbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGenerator), &PY_TYPE_DEF(AbstractGenerator), module, "AbstractGenerator", 0);
            }

            void t_AbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "class_", make_descriptor(AbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "wrapfn_", make_descriptor(t_AbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_AbstractGenerator::wrap_Object(AbstractGenerator(((t_AbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              AbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AbstractGenerator(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.close());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::utils::units::Unit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.writeUnits(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "writeUnits", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBody::class$ = NULL;
            jmethodID *DSSTThirdBody::mids$ = NULL;
            bool DSSTThirdBody::live$ = false;
            ::java::lang::String *DSSTThirdBody::ATTRACTION_COEFFICIENT = NULL;
            jdouble DSSTThirdBody::BIG_TRUNCATION_TOLERANCE = (jdouble) 0;
            jint DSSTThirdBody::MAX_POWER = (jint) 0;
            ::java::lang::String *DSSTThirdBody::SHORT_PERIOD_PREFIX = NULL;
            jdouble DSSTThirdBody::SMALL_TRUNCATION_TOLERANCE = (jdouble) 0;

            jclass DSSTThirdBody::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_9fdcf330e0068bec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;D)V");
                mids$[mid_getBody_5df52e80cbb5eb85] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
                mids$[mid_getMeanElementRate_0483a0f94731abef] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_7d3eb19aa1e75a63] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_3144241334d46411] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_5401e749436ec3b7] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
                BIG_TRUNCATION_TOLERANCE = env->getStaticDoubleField(cls, "BIG_TRUNCATION_TOLERANCE");
                MAX_POWER = env->getStaticIntField(cls, "MAX_POWER");
                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                SMALL_TRUNCATION_TOLERANCE = env->getStaticDoubleField(cls, "SMALL_TRUNCATION_TOLERANCE");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBody::DSSTThirdBody(const ::org::orekit::bodies::CelestialBody & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9fdcf330e0068bec, a0.this$, a1)) {}

            ::org::orekit::bodies::CelestialBody DSSTThirdBody::getBody() const
            {
              return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_5df52e80cbb5eb85]));
            }

            JArray< jdouble > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_0483a0f94731abef], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_7d3eb19aa1e75a63], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_3144241334d46411], a0.this$, a1.this$, a2.this$));
            }

            void DSSTThirdBody::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095], a0.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_5401e749436ec3b7], a0.this$, a1.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276], a0.this$, a1.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTThirdBody_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBody_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBody_init_(t_DSSTThirdBody *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBody_getBody(t_DSSTThirdBody *self);
            static PyObject *t_DSSTThirdBody_getMeanElementRate(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_getParametersDrivers(t_DSSTThirdBody *self);
            static PyObject *t_DSSTThirdBody_initializeShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_registerAttitudeProvider(t_DSSTThirdBody *self, PyObject *arg);
            static PyObject *t_DSSTThirdBody_updateShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_get__body(t_DSSTThirdBody *self, void *data);
            static PyObject *t_DSSTThirdBody_get__parametersDrivers(t_DSSTThirdBody *self, void *data);
            static PyGetSetDef t_DSSTThirdBody__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBody, body),
              DECLARE_GET_FIELD(t_DSSTThirdBody, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBody__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBody, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBody, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBody, getBody, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBody, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTThirdBody, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBody, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTThirdBody, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTThirdBody, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBody)[] = {
              { Py_tp_methods, t_DSSTThirdBody__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBody_init_ },
              { Py_tp_getset, t_DSSTThirdBody__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBody)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBody, t_DSSTThirdBody, DSSTThirdBody);

            void t_DSSTThirdBody::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBody), &PY_TYPE_DEF(DSSTThirdBody), module, "DSSTThirdBody", 0);
            }

            void t_DSSTThirdBody::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "class_", make_descriptor(DSSTThirdBody::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "wrapfn_", make_descriptor(t_DSSTThirdBody::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTThirdBody::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "ATTRACTION_COEFFICIENT", make_descriptor(j2p(*DSSTThirdBody::ATTRACTION_COEFFICIENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "BIG_TRUNCATION_TOLERANCE", make_descriptor(DSSTThirdBody::BIG_TRUNCATION_TOLERANCE));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "MAX_POWER", make_descriptor(DSSTThirdBody::MAX_POWER));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTThirdBody::SHORT_PERIOD_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "SMALL_TRUNCATION_TOLERANCE", make_descriptor(DSSTThirdBody::SMALL_TRUNCATION_TOLERANCE));
            }

            static PyObject *t_DSSTThirdBody_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBody::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBody::wrap_Object(DSSTThirdBody(((t_DSSTThirdBody *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBody_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBody::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBody_init_(t_DSSTThirdBody *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
              jdouble a1;
              DSSTThirdBody object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTThirdBody(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBody_getBody(t_DSSTThirdBody *self)
            {
              ::org::orekit::bodies::CelestialBody result((jobject) NULL);
              OBJ_CALL(result = self->object.getBody());
              return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
            }

            static PyObject *t_DSSTThirdBody_getMeanElementRate(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_getParametersDrivers(t_DSSTThirdBody *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTThirdBody_initializeShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_registerAttitudeProvider(t_DSSTThirdBody *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_updateShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_get__body(t_DSSTThirdBody *self, void *data)
            {
              ::org::orekit::bodies::CelestialBody value((jobject) NULL);
              OBJ_CALL(value = self->object.getBody());
              return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
            }

            static PyObject *t_DSSTThirdBody_get__parametersDrivers(t_DSSTThirdBody *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Edge::class$ = NULL;
          jmethodID *Edge::mids$ = NULL;
          bool Edge::live$ = false;

          jclass Edge::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Edge");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCircle_394360bc4f7bf853] = env->getMethodID(cls, "getCircle", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getEnd_4bad8eaaf8f5ef91] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");
              mids$[mid_getLength_b74f83833fdad017] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getPointAt_498f52cd8e5a7072] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getStart_4bad8eaaf8f5ef91] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Circle Edge::getCircle() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Circle(env->callObjectMethod(this$, mids$[mid_getCircle_394360bc4f7bf853]));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getEnd() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getEnd_4bad8eaaf8f5ef91]));
          }

          jdouble Edge::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Edge::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_498f52cd8e5a7072], a0));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getStart() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getStart_4bad8eaaf8f5ef91]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_getCircle(t_Edge *self);
          static PyObject *t_Edge_getEnd(t_Edge *self);
          static PyObject *t_Edge_getLength(t_Edge *self);
          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg);
          static PyObject *t_Edge_getStart(t_Edge *self);
          static PyObject *t_Edge_get__circle(t_Edge *self, void *data);
          static PyObject *t_Edge_get__end(t_Edge *self, void *data);
          static PyObject *t_Edge_get__length(t_Edge *self, void *data);
          static PyObject *t_Edge_get__start(t_Edge *self, void *data);
          static PyGetSetDef t_Edge__fields_[] = {
            DECLARE_GET_FIELD(t_Edge, circle),
            DECLARE_GET_FIELD(t_Edge, end),
            DECLARE_GET_FIELD(t_Edge, length),
            DECLARE_GET_FIELD(t_Edge, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Edge__methods_[] = {
            DECLARE_METHOD(t_Edge, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, getCircle, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getLength, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getPointAt, METH_O),
            DECLARE_METHOD(t_Edge, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Edge)[] = {
            { Py_tp_methods, t_Edge__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Edge__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Edge)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Edge, t_Edge, Edge);

          void t_Edge::install(PyObject *module)
          {
            installType(&PY_TYPE(Edge), &PY_TYPE_DEF(Edge), module, "Edge", 0);
          }

          void t_Edge::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "class_", make_descriptor(Edge::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "wrapfn_", make_descriptor(t_Edge::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Edge::initializeClass, 1)))
              return NULL;
            return t_Edge::wrap_Object(Edge(((t_Edge *) arg)->object.this$));
          }
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Edge::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Edge_getCircle(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(result);
          }

          static PyObject *t_Edge_getEnd(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_getLength(t_Edge *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLength());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getPointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", arg);
            return NULL;
          }

          static PyObject *t_Edge_getStart(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_get__circle(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(value);
          }

          static PyObject *t_Edge_get__end(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }

          static PyObject *t_Edge_get__length(t_Edge *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLength());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Edge_get__start(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/util/Locale.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedMessages::class$ = NULL;
        jmethodID *RuggedMessages::mids$ = NULL;
        bool RuggedMessages::live$ = false;
        RuggedMessages *RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::CANNOT_PARSE_LINE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_NOT_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = NULL;
        RuggedMessages *RuggedMessages::DUPLICATED_PARAMETER_NAME = NULL;
        RuggedMessages *RuggedMessages::EMPTY_TILE = NULL;
        RuggedMessages *RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = NULL;
        RuggedMessages *RuggedMessages::INTERNAL_ERROR = NULL;
        RuggedMessages *RuggedMessages::INVALID_RANGE_FOR_LINES = NULL;
        RuggedMessages *RuggedMessages::INVALID_RUGGED_NAME = NULL;
        RuggedMessages *RuggedMessages::INVALID_STEP = NULL;
        RuggedMessages *RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = NULL;
        RuggedMessages *RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_DEM_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_LAYER_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_PARAMETERS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::NO_REFERENCE_MAPPINGS = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_ANGLES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_INDICES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TIME_RANGE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = NULL;
        RuggedMessages *RuggedMessages::TILE_ALREADY_DEFINED = NULL;
        RuggedMessages *RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::UNINITIALIZED_CONTEXT = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_SENSOR = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_TILE = NULL;
        RuggedMessages *RuggedMessages::UNSUPPORTED_REFINING_CONTEXT = NULL;

        jclass RuggedMessages::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedMessages");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLocalizedString_26070c28e6ea354d] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getSourceString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
            mids$[mid_valueOf_77b5d40971fe0903] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/errors/RuggedMessages;");
            mids$[mid_values_636cfe64f74e7a02] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/errors/RuggedMessages;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            ATMOSPHERIC_REFRACTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ATMOSPHERIC_REFRACTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            CANNOT_PARSE_LINE = new RuggedMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ACTIVATION_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ACTIVATION_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ALREADY_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ALREADY_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_NOT_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_NOT_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = new RuggedMessages(env->getStaticObjectField(cls, "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DUPLICATED_PARAMETER_NAME = new RuggedMessages(env->getStaticObjectField(cls, "DUPLICATED_PARAMETER_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            EMPTY_TILE = new RuggedMessages(env->getStaticObjectField(cls, "EMPTY_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = new RuggedMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INTERNAL_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RANGE_FOR_LINES = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RANGE_FOR_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RUGGED_NAME = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RUGGED_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_STEP = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_STEP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LIGHT_TIME_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "LIGHT_TIME_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NOT_INTERPOLATOR_DUMP_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NOT_INTERPOLATOR_DUMP_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_DEM_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_DEM_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_LAYER_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_LAYER_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_PARAMETERS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "NO_PARAMETERS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_REFERENCE_MAPPINGS = new RuggedMessages(env->getStaticObjectField(cls, "NO_REFERENCE_MAPPINGS", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_ANGLES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_ANGLES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_INDICES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_INDICES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TIME_RANGE = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TIME_RANGE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_ALREADY_DEFINED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_ALREADY_DEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNINITIALIZED_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNINITIALIZED_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_SENSOR = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_SENSOR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_TILE = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNSUPPORTED_REFINING_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNSUPPORTED_REFINING_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String RuggedMessages::getLocalizedString(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_26070c28e6ea354d], a0.this$));
        }

        ::java::lang::String RuggedMessages::getSourceString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_1c1fa1e935d6cdcf]));
        }

        RuggedMessages RuggedMessages::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return RuggedMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_77b5d40971fe0903], a0.this$));
        }

        JArray< RuggedMessages > RuggedMessages::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< RuggedMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_636cfe64f74e7a02]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args);
        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg);
        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self);
        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_RuggedMessages_values(PyTypeObject *type);
        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data);
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data);
        static PyGetSetDef t_RuggedMessages__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedMessages, sourceString),
          DECLARE_GET_FIELD(t_RuggedMessages, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedMessages__methods_[] = {
          DECLARE_METHOD(t_RuggedMessages, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, of_, METH_VARARGS),
          DECLARE_METHOD(t_RuggedMessages, getLocalizedString, METH_O),
          DECLARE_METHOD(t_RuggedMessages, getSourceString, METH_NOARGS),
          DECLARE_METHOD(t_RuggedMessages, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedMessages)[] = {
          { Py_tp_methods, t_RuggedMessages__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RuggedMessages__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedMessages)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(RuggedMessages, t_RuggedMessages, RuggedMessages);
        PyObject *t_RuggedMessages::wrap_Object(const RuggedMessages& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RuggedMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RuggedMessages::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedMessages), &PY_TYPE_DEF(RuggedMessages), module, "RuggedMessages", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(RuggedMessages$UTF8Control)));
        }

        void t_RuggedMessages::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "class_", make_descriptor(RuggedMessages::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "wrapfn_", make_descriptor(t_RuggedMessages::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "boxfn_", make_descriptor(boxObject));
          env->getClass(RuggedMessages::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ATMOSPHERIC_REFRACTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "CANNOT_PARSE_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::CANNOT_PARSE_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ACTIVATION_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ALREADY_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_NOT_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_NOT_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DUPLICATED_PARAMETER_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DUPLICATED_PARAMETER_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "EMPTY_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::EMPTY_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INTERNAL_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INTERNAL_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RANGE_FOR_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RANGE_FOR_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RUGGED_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RUGGED_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_STEP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_STEP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LIGHT_TIME_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NOT_INTERPOLATOR_DUMP_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_DEM_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_DEM_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_LAYER_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_LAYER_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_PARAMETERS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_PARAMETERS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_REFERENCE_MAPPINGS", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_REFERENCE_MAPPINGS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_ANGLES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_ANGLES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_INDICES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_INDICES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TIME_RANGE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TIME_RANGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_ALREADY_DEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_ALREADY_DEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNINITIALIZED_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNINITIALIZED_CONTEXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_SENSOR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_SENSOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNSUPPORTED_REFINING_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNSUPPORTED_REFINING_CONTEXT)));
        }

        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedMessages::initializeClass, 1)))
            return NULL;
          return t_RuggedMessages::wrap_Object(RuggedMessages(((t_RuggedMessages *) arg)->object.this$));
        }
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedMessages::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg)
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLocalizedString(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
          return NULL;
        }

        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceString());
          return j2p(result);
        }

        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          RuggedMessages result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::valueOf(a0));
            return t_RuggedMessages::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_RuggedMessages_values(PyTypeObject *type)
        {
          JArray< RuggedMessages > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::values());
          return JArray<jobject>(result.this$).wrap(t_RuggedMessages::wrap_jobject);
        }
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceString());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *MeasurementFilter::class$ = NULL;
          jmethodID *MeasurementFilter::mids$ = NULL;
          bool MeasurementFilter::live$ = false;

          jclass MeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/MeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_filter_5714f5cbb8239657] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_5714f5cbb8239657], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {
          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data);
          static PyGetSetDef t_MeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_MeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementFilter)[] = {
            { Py_tp_methods, t_MeasurementFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementFilter, t_MeasurementFilter, MeasurementFilter);
          PyObject *t_MeasurementFilter::wrap_Object(const MeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementFilter), &PY_TYPE_DEF(MeasurementFilter), module, "MeasurementFilter", 0);
          }

          void t_MeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "class_", make_descriptor(MeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "wrapfn_", make_descriptor(t_MeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_MeasurementFilter::wrap_Object(MeasurementFilter(((t_MeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverCommonParametersWithDerivatives::class$ = NULL;
        jmethodID *GroundReceiverCommonParametersWithDerivatives::mids$ = NULL;
        bool GroundReceiverCommonParametersWithDerivatives::live$ = false;

        jclass GroundReceiverCommonParametersWithDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c00889d98498158a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Ljava/util/Map;Lorg/orekit/frames/FieldTransform;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
            mids$[mid_getIndices_810bed48fafb0b9a] = env->getMethodID(cls, "getIndices", "()Ljava/util/Map;");
            mids$[mid_getOffsetToInertialDownlink_b8c22ddb6f9598ea] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getState_9d155cc8314c99cf] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_243debd9cc1dd623] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTauD_9ebd7c8cd097159e] = env->getMethodID(cls, "getTauD", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getTransitPV_243debd9cc1dd623] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTransitState_9d155cc8314c99cf] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithDerivatives::GroundReceiverCommonParametersWithDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::java::util::Map & a1, const ::org::orekit::frames::FieldTransform & a2, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a3, const ::org::hipparchus::analysis::differentiation::Gradient & a4, const ::org::orekit::propagation::SpacecraftState & a5, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c00889d98498158a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::java::util::Map GroundReceiverCommonParametersWithDerivatives::getIndices() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIndices_810bed48fafb0b9a]));
        }

        ::org::orekit::frames::FieldTransform GroundReceiverCommonParametersWithDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_b8c22ddb6f9598ea]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_9d155cc8314c99cf]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_243debd9cc1dd623]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GroundReceiverCommonParametersWithDerivatives::getTauD() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getTauD_9ebd7c8cd097159e]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_243debd9cc1dd623]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_9d155cc8314c99cf]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyGetSetDef t_GroundReceiverCommonParametersWithDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, indices),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, offsetToInertialDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, state),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, stationDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, tauD),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitPV),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverCommonParametersWithDerivatives__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getIndices, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getOffsetToInertialDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getState, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getStationDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTauD, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitPV, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitState, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverCommonParametersWithDerivatives)[] = {
          { Py_tp_methods, t_GroundReceiverCommonParametersWithDerivatives__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverCommonParametersWithDerivatives_init_ },
          { Py_tp_getset, t_GroundReceiverCommonParametersWithDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverCommonParametersWithDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundReceiverCommonParametersWithDerivatives, t_GroundReceiverCommonParametersWithDerivatives, GroundReceiverCommonParametersWithDerivatives);

        void t_GroundReceiverCommonParametersWithDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverCommonParametersWithDerivatives), &PY_TYPE_DEF(GroundReceiverCommonParametersWithDerivatives), module, "GroundReceiverCommonParametersWithDerivatives", 0);
        }

        void t_GroundReceiverCommonParametersWithDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "class_", make_descriptor(GroundReceiverCommonParametersWithDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "wrapfn_", make_descriptor(t_GroundReceiverCommonParametersWithDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverCommonParametersWithDerivatives::wrap_Object(GroundReceiverCommonParametersWithDerivatives(((t_GroundReceiverCommonParametersWithDerivatives *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::frames::FieldTransform a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::analysis::differentiation::Gradient a4((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a5((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a6((jobject) NULL);
          PyTypeObject **p6;
          GroundReceiverCommonParametersWithDerivatives object((jobject) NULL);

          if (!parseArgs(args, "kKKKkkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::java::util::Map::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2, &p2, ::org::orekit::frames::t_FieldTransform::parameters_, &a3, &p3, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
          {
            INT_CALL(object = GroundReceiverCommonParametersWithDerivatives(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Integer));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::frames::FieldTransform result((jobject) NULL);
          OBJ_CALL(result = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::frames::FieldTransform value((jobject) NULL);
          OBJ_CALL(value = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateMatrixFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateMatrixFunctionDifferentiator::mids$ = NULL;
        bool UnivariateMatrixFunctionDifferentiator::live$ = false;

        jclass UnivariateMatrixFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_3622054ab553d5e4] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction UnivariateMatrixFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_3622054ab553d5e4], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateMatrixFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateMatrixFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateMatrixFunctionDifferentiator, t_UnivariateMatrixFunctionDifferentiator, UnivariateMatrixFunctionDifferentiator);

        void t_UnivariateMatrixFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateMatrixFunctionDifferentiator), &PY_TYPE_DEF(UnivariateMatrixFunctionDifferentiator), module, "UnivariateMatrixFunctionDifferentiator", 0);
        }

        void t_UnivariateMatrixFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "class_", make_descriptor(UnivariateMatrixFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateMatrixFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateMatrixFunctionDifferentiator::wrap_Object(UnivariateMatrixFunctionDifferentiator(((t_UnivariateMatrixFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTZonalContext::class$ = NULL;
            jmethodID *DSSTZonalContext::mids$ = NULL;
            bool DSSTZonalContext::live$ = false;

            jclass DSSTZonalContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getBB_b74f83833fdad017] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBoA_b74f83833fdad017] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_b74f83833fdad017] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getCXO2N2A2_b74f83833fdad017] = env->getMethodID(cls, "getCXO2N2A2", "()D");
                mids$[mid_getHK_b74f83833fdad017] = env->getMethodID(cls, "getHK", "()D");
                mids$[mid_getK2MH2_b74f83833fdad017] = env->getMethodID(cls, "getK2MH2", "()D");
                mids$[mid_getK2MH2O2_b74f83833fdad017] = env->getMethodID(cls, "getK2MH2O2", "()D");
                mids$[mid_getM2aoA_b74f83833fdad017] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_b74f83833fdad017] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoa_b74f83833fdad017] = env->getMethodID(cls, "getMuoa", "()D");
                mids$[mid_getOON2A2_b74f83833fdad017] = env->getMethodID(cls, "getOON2A2", "()D");
                mids$[mid_getOoAB_b74f83833fdad017] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getRoa_b74f83833fdad017] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getX2ON2A2XP1_b74f83833fdad017] = env->getMethodID(cls, "getX2ON2A2XP1", "()D");
                mids$[mid_getX3ON2A_b74f83833fdad017] = env->getMethodID(cls, "getX3ON2A", "()D");
                mids$[mid_getXON2A2_b74f83833fdad017] = env->getMethodID(cls, "getXON2A2", "()D");
                mids$[mid_getXX_b74f83833fdad017] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getXXX_b74f83833fdad017] = env->getMethodID(cls, "getXXX", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTZonalContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getCXO2N2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCXO2N2A2_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getHK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHK_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getK2MH2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getK2MH2O2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2O2_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getMuoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoa_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getOON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOON2A2_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getX2ON2A2XP1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX2ON2A2XP1_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getX3ON2A() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX3ON2A_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getXON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXON2A2_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_b74f83833fdad017]);
            }

            jdouble DSSTZonalContext::getXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXXX_b74f83833fdad017]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data);
            static PyGetSetDef t_DSSTZonalContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonalContext, bB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTZonalContext, cXO2N2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, hK),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2O2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTZonalContext, muoa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, oON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, roa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x2ON2A2XP1),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x3ON2A),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xX),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xXX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonalContext__methods_[] = {
              DECLARE_METHOD(t_DSSTZonalContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getCXO2N2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getHK, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2O2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMuoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX2ON2A2XP1, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX3ON2A, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXXX, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonalContext)[] = {
              { Py_tp_methods, t_DSSTZonalContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTZonalContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonalContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTZonalContext, t_DSSTZonalContext, DSSTZonalContext);

            void t_DSSTZonalContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonalContext), &PY_TYPE_DEF(DSSTZonalContext), module, "DSSTZonalContext", 0);
            }

            void t_DSSTZonalContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "class_", make_descriptor(DSSTZonalContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "wrapfn_", make_descriptor(t_DSSTZonalContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonalContext::initializeClass, 1)))
                return NULL;
              return t_DSSTZonalContext::wrap_Object(DSSTZonalContext(((t_DSSTZonalContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonalContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXXX());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovarianceKey::class$ = NULL;
            jmethodID *CartesianCovarianceKey::mids$ = NULL;
            bool CartesianCovarianceKey::live$ = false;
            CartesianCovarianceKey *CartesianCovarianceKey::COMMENT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::COV_REF_FRAME = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Y_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Y_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Z_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::EPOCH = NULL;

            jclass CartesianCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_2b44fd2f7413849c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)Z");
                mids$[mid_valueOf_3daea66a7d6e3d6e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");
                mids$[mid_values_c22a8ef1b487b41f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                COV_REF_FRAME = new CartesianCovarianceKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Y_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Y_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Z_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Z_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                EPOCH = new CartesianCovarianceKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CartesianCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_2b44fd2f7413849c], a0.this$, a1.this$, a2.this$);
            }

            CartesianCovarianceKey CartesianCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CartesianCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3daea66a7d6e3d6e], a0.this$));
            }

            JArray< CartesianCovarianceKey > CartesianCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CartesianCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c22a8ef1b487b41f]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_CartesianCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceKey_of_(t_CartesianCovarianceKey *self, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_process(t_CartesianCovarianceKey *self, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_CartesianCovarianceKey_get__parameters_(t_CartesianCovarianceKey *self, void *data);
            static PyGetSetDef t_CartesianCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_CartesianCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CartesianCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_CartesianCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovarianceKey)[] = {
              { Py_tp_methods, t_CartesianCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CartesianCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CartesianCovarianceKey, t_CartesianCovarianceKey, CartesianCovarianceKey);
            PyObject *t_CartesianCovarianceKey::wrap_Object(const CartesianCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CartesianCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CartesianCovarianceKey *self = (t_CartesianCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CartesianCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CartesianCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CartesianCovarianceKey *self = (t_CartesianCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CartesianCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovarianceKey), &PY_TYPE_DEF(CartesianCovarianceKey), module, "CartesianCovarianceKey", 0);
            }

            void t_CartesianCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "class_", make_descriptor(CartesianCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "wrapfn_", make_descriptor(t_CartesianCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CartesianCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "COMMENT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "COV_REF_FRAME", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::COV_REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Y_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Y_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Z_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Z_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "EPOCH", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::EPOCH)));
            }

            static PyObject *t_CartesianCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_CartesianCovarianceKey::wrap_Object(CartesianCovarianceKey(((t_CartesianCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CartesianCovarianceKey_of_(t_CartesianCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CartesianCovarianceKey_process(t_CartesianCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CartesianCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CartesianCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CartesianCovarianceKey::valueOf(a0));
                return t_CartesianCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CartesianCovarianceKey_values(PyTypeObject *type)
            {
              JArray< CartesianCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CartesianCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_CartesianCovarianceKey::wrap_jobject);
            }
            static PyObject *t_CartesianCovarianceKey_get__parameters_(t_CartesianCovarianceKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Acosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Acosh::class$ = NULL;
        jmethodID *Acosh::mids$ = NULL;
        bool Acosh::live$ = false;

        jclass Acosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Acosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acosh::Acosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Acosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args);

        static PyMethodDef t_Acosh__methods_[] = {
          DECLARE_METHOD(t_Acosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Acosh)[] = {
          { Py_tp_methods, t_Acosh__methods_ },
          { Py_tp_init, (void *) t_Acosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Acosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Acosh, t_Acosh, Acosh);

        void t_Acosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Acosh), &PY_TYPE_DEF(Acosh), module, "Acosh", 0);
        }

        void t_Acosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "class_", make_descriptor(Acosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "wrapfn_", make_descriptor(t_Acosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Acosh::initializeClass, 1)))
            return NULL;
          return t_Acosh::wrap_Object(Acosh(((t_Acosh *) arg)->object.this$));
        }
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Acosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds)
        {
          Acosh object((jobject) NULL);

          INT_CALL(object = Acosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Transform::class$ = NULL;
        jmethodID *Transform::mids$ = NULL;
        bool Transform::live$ = false;

        jclass Transform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Transform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_apply_2214f7ad5b6ca158] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_apply_8e29b62ae9b3c9fd] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_apply_19817b868740d9ae] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Transform::apply(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_apply_2214f7ad5b6ca158], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_apply_8e29b62ae9b3c9fd], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::Hyperplane & a1, const ::org::hipparchus::geometry::partitioning::Hyperplane & a2) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_apply_19817b868740d9ae], a0.this$, a1.this$, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Transform_of_(t_Transform *self, PyObject *args);
        static PyObject *t_Transform_apply(t_Transform *self, PyObject *args);
        static PyObject *t_Transform_get__parameters_(t_Transform *self, void *data);
        static PyGetSetDef t_Transform__fields_[] = {
          DECLARE_GET_FIELD(t_Transform, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Transform__methods_[] = {
          DECLARE_METHOD(t_Transform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Transform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Transform, of_, METH_VARARGS),
          DECLARE_METHOD(t_Transform, apply, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Transform)[] = {
          { Py_tp_methods, t_Transform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Transform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Transform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Transform, t_Transform, Transform);
        PyObject *t_Transform::wrap_Object(const Transform& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Transform::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Transform *self = (t_Transform *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Transform::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Transform::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Transform *self = (t_Transform *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Transform::install(PyObject *module)
        {
          installType(&PY_TYPE(Transform), &PY_TYPE_DEF(Transform), module, "Transform", 0);
        }

        void t_Transform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "class_", make_descriptor(Transform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "wrapfn_", make_descriptor(t_Transform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Transform::initializeClass, 1)))
            return NULL;
          return t_Transform::wrap_Object(Transform(((t_Transform *) arg)->object.this$));
        }
        static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Transform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Transform_of_(t_Transform *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Transform_apply(t_Transform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::Point result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Hyperplane a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::partitioning::Hyperplane a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0, a1, a2));
                return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[1]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }
        static PyObject *t_Transform_get__parameters_(t_Transform *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A0.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A0::class$ = NULL;
          jmethodID *SubFrame4A0::mids$ = NULL;
          bool SubFrame4A0::live$ = false;

          jclass SubFrame4A0::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A0");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A0__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A0, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A0, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A0)[] = {
            { Py_tp_methods, t_SubFrame4A0__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A0)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A0, t_SubFrame4A0, SubFrame4A0);

          void t_SubFrame4A0::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A0), &PY_TYPE_DEF(SubFrame4A0), module, "SubFrame4A0", 0);
          }

          void t_SubFrame4A0::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "class_", make_descriptor(SubFrame4A0::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "wrapfn_", make_descriptor(t_SubFrame4A0::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A0::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A0::wrap_Object(SubFrame4A0(((t_SubFrame4A0 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A0::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractAmbiguityModifier::class$ = NULL;
          jmethodID *AbstractAmbiguityModifier::mids$ = NULL;
          bool AbstractAmbiguityModifier::live$ = false;

          jclass AbstractAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_doModify_f784f7724d44a90a] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_getDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
              mids$[mid_doModifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "doModifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractAmbiguityModifier::AbstractAmbiguityModifier(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractAmbiguityModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractAmbiguityModifier)[] = {
            { Py_tp_methods, t_AbstractAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractAmbiguityModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractAmbiguityModifier, t_AbstractAmbiguityModifier, AbstractAmbiguityModifier);

          void t_AbstractAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractAmbiguityModifier), &PY_TYPE_DEF(AbstractAmbiguityModifier), module, "AbstractAmbiguityModifier", 0);
          }

          void t_AbstractAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "class_", make_descriptor(AbstractAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "wrapfn_", make_descriptor(t_AbstractAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractAmbiguityModifier::wrap_Object(AbstractAmbiguityModifier(((t_AbstractAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            AbstractAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = AbstractAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonProcessingState::class$ = NULL;
            jmethodID *PythonProcessingState::mids$ = NULL;
            bool PythonProcessingState::live$ = false;

            jclass PythonProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_processToken_5949d4df22f33350] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonProcessingState::PythonProcessingState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonProcessingState::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonProcessingState::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonProcessingState::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {
            static PyObject *t_PythonProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonProcessingState_init_(t_PythonProcessingState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonProcessingState_finalize(t_PythonProcessingState *self);
            static PyObject *t_PythonProcessingState_pythonExtension(t_PythonProcessingState *self, PyObject *args);
            static jboolean JNICALL t_PythonProcessingState_processToken0(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonProcessingState_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonProcessingState_get__self(t_PythonProcessingState *self, void *data);
            static PyGetSetDef t_PythonProcessingState__fields_[] = {
              DECLARE_GET_FIELD(t_PythonProcessingState, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonProcessingState__methods_[] = {
              DECLARE_METHOD(t_PythonProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonProcessingState, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonProcessingState, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonProcessingState)[] = {
              { Py_tp_methods, t_PythonProcessingState__methods_ },
              { Py_tp_init, (void *) t_PythonProcessingState_init_ },
              { Py_tp_getset, t_PythonProcessingState__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonProcessingState, t_PythonProcessingState, PythonProcessingState);

            void t_PythonProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonProcessingState), &PY_TYPE_DEF(PythonProcessingState), module, "PythonProcessingState", 1);
            }

            void t_PythonProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "class_", make_descriptor(PythonProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "wrapfn_", make_descriptor(t_PythonProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonProcessingState::initializeClass);
              JNINativeMethod methods[] = {
                { "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z", (void *) t_PythonProcessingState_processToken0 },
                { "pythonDecRef", "()V", (void *) t_PythonProcessingState_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonProcessingState::initializeClass, 1)))
                return NULL;
              return t_PythonProcessingState::wrap_Object(PythonProcessingState(((t_PythonProcessingState *) arg)->object.this$));
            }
            static PyObject *t_PythonProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonProcessingState_init_(t_PythonProcessingState *self, PyObject *args, PyObject *kwds)
            {
              PythonProcessingState object((jobject) NULL);

              INT_CALL(object = PythonProcessingState());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonProcessingState_finalize(t_PythonProcessingState *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonProcessingState_pythonExtension(t_PythonProcessingState *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static jboolean JNICALL t_PythonProcessingState_processToken0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_ParseToken::wrap_Object(::org::orekit::files::ccsds::utils::lexical::ParseToken(a0));
              PyObject *result = PyObject_CallMethod(obj, "processToken", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("processToken", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonProcessingState_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonProcessingState_get__self(t_PythonProcessingState *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrMessage.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrMessage::class$ = NULL;
            jmethodID *SsrMessage::mids$ = NULL;
            bool SsrMessage::live$ = false;

            jclass SsrMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a25730dd3b31fccf] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/SsrHeader;Ljava/util/List;)V");
                mids$[mid_getData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
                mids$[mid_getHeader_a5191546aa5c9bd3] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/ssr/SsrHeader;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrMessage::SsrMessage(jint a0, const ::org::orekit::gnss::metric::messages::ssr::SsrHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_a25730dd3b31fccf, a0, a1.this$, a2.this$)) {}

            ::java::util::List SsrMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_e62d3bb06d56d7e3]));
            }

            ::org::orekit::gnss::metric::messages::ssr::SsrHeader SsrMessage::getHeader() const
            {
              return ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->callObjectMethod(this$, mids$[mid_getHeader_a5191546aa5c9bd3]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args);
            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrMessage_getData(t_SsrMessage *self);
            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self);
            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data);
            static PyGetSetDef t_SsrMessage__fields_[] = {
              DECLARE_GET_FIELD(t_SsrMessage, data),
              DECLARE_GET_FIELD(t_SsrMessage, header),
              DECLARE_GET_FIELD(t_SsrMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrMessage__methods_[] = {
              DECLARE_METHOD(t_SsrMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_SsrMessage, getData, METH_NOARGS),
              DECLARE_METHOD(t_SsrMessage, getHeader, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrMessage)[] = {
              { Py_tp_methods, t_SsrMessage__methods_ },
              { Py_tp_init, (void *) t_SsrMessage_init_ },
              { Py_tp_getset, t_SsrMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(SsrMessage, t_SsrMessage, SsrMessage);
            PyObject *t_SsrMessage::wrap_Object(const SsrMessage& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_SsrMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_SsrMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrMessage), &PY_TYPE_DEF(SsrMessage), module, "SsrMessage", 0);
            }

            void t_SsrMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "class_", make_descriptor(SsrMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "wrapfn_", make_descriptor(t_SsrMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrMessage::initializeClass, 1)))
                return NULL;
              return t_SsrMessage::wrap_Object(SsrMessage(((t_SsrMessage *) arg)->object.this$));
            }
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader a1((jobject) NULL);
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              SsrMessage object((jobject) NULL);

              if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::SsrHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = SsrMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrMessage_getData(t_SsrMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
            }

            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader result((jobject) NULL);
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(result);
            }
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AttitudeType::class$ = NULL;
            jmethodID *AttitudeType::mids$ = NULL;
            bool AttitudeType::live$ = false;
            AttitudeType *AttitudeType::EULER_ANGLE = NULL;
            AttitudeType *AttitudeType::EULER_ANGLE_ANGVEL = NULL;
            AttitudeType *AttitudeType::EULER_ANGLE_DERIVATIVE = NULL;
            AttitudeType *AttitudeType::QUATERNION = NULL;
            AttitudeType *AttitudeType::QUATERNION_ANGVEL = NULL;
            AttitudeType *AttitudeType::QUATERNION_DERIVATIVE = NULL;
            AttitudeType *AttitudeType::QUATERNION_EULER_RATES = NULL;
            AttitudeType *AttitudeType::SPIN = NULL;
            AttitudeType *AttitudeType::SPIN_NUTATION = NULL;
            AttitudeType *AttitudeType::SPIN_NUTATION_MOMENTUM = NULL;

            jclass AttitudeType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AttitudeType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_7b3d6c8ed92f41f2] = env->getMethodID(cls, "build", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/time/AbsoluteDate;[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_createDataFields_6e76615305e1bf27] = env->getMethodID(cls, "createDataFields", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[Ljava/lang/String;");
                mids$[mid_generateData_e56ec5c65fa92cc2] = env->getMethodID(cls, "generateData", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[D");
                mids$[mid_getAngularDerivativesFilter_33d67d456ec94a0c] = env->getMethodID(cls, "getAngularDerivativesFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                mids$[mid_getName_11ae2994efd15504] = env->getMethodID(cls, "getName", "(D)Ljava/lang/String;");
                mids$[mid_parse_b6ef4ae5dfdd231d] = env->getMethodID(cls, "parse", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/files/ccsds/utils/ContextBinding;[Ljava/lang/String;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_parseType_3abfc2fb05e5fcd5] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_3abfc2fb05e5fcd5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_values_57a71570a155d664] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                EULER_ANGLE = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                EULER_ANGLE_ANGVEL = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                EULER_ANGLE_DERIVATIVE = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE_DERIVATIVE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_ANGVEL = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_DERIVATIVE = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_DERIVATIVE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_EULER_RATES = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_EULER_RATES", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN = new AttitudeType(env->getStaticObjectField(cls, "SPIN", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN_NUTATION = new AttitudeType(env->getStaticObjectField(cls, "SPIN_NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN_NUTATION_MOMENTUM = new AttitudeType(env->getStaticObjectField(cls, "SPIN_NUTATION_MOMENTUM", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeType::build(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::time::AbsoluteDate & a4, const JArray< jdouble > & a5) const
            {
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_build_7b3d6c8ed92f41f2], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            JArray< ::java::lang::String > AttitudeType::createDataFields(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_createDataFields_6e76615305e1bf27], a0, a1, a2.this$, a3, a4.this$));
            }

            JArray< jdouble > AttitudeType::generateData(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_generateData_e56ec5c65fa92cc2], a0, a1, a2.this$, a3, a4.this$));
            }

            ::org::orekit::utils::AngularDerivativesFilter AttitudeType::getAngularDerivativesFilter() const
            {
              return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAngularDerivativesFilter_33d67d456ec94a0c]));
            }

            ::java::lang::String AttitudeType::getName(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11ae2994efd15504], a0));
            }

            ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeType::parse(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::files::ccsds::utils::ContextBinding & a4, const JArray< ::java::lang::String > & a5) const
            {
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_parse_b6ef4ae5dfdd231d], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            AttitudeType AttitudeType::parseType(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_parseType_3abfc2fb05e5fcd5], a0.this$));
            }

            ::java::lang::String AttitudeType::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
            }

            AttitudeType AttitudeType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3abfc2fb05e5fcd5], a0.this$));
            }

            JArray< AttitudeType > AttitudeType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AttitudeType >(env->callStaticObjectMethod(cls, mids$[mid_values_57a71570a155d664]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            static PyObject *t_AttitudeType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_of_(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_build(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_createDataFields(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_generateData(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_getAngularDerivativesFilter(t_AttitudeType *self);
            static PyObject *t_AttitudeType_getName(t_AttitudeType *self, PyObject *arg);
            static PyObject *t_AttitudeType_parse(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_parseType(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_toString(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AttitudeType_values(PyTypeObject *type);
            static PyObject *t_AttitudeType_get__angularDerivativesFilter(t_AttitudeType *self, void *data);
            static PyObject *t_AttitudeType_get__parameters_(t_AttitudeType *self, void *data);
            static PyGetSetDef t_AttitudeType__fields_[] = {
              DECLARE_GET_FIELD(t_AttitudeType, angularDerivativesFilter),
              DECLARE_GET_FIELD(t_AttitudeType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AttitudeType__methods_[] = {
              DECLARE_METHOD(t_AttitudeType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, build, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, createDataFields, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, generateData, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, getAngularDerivativesFilter, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeType, getName, METH_O),
              DECLARE_METHOD(t_AttitudeType, parse, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, parseType, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, toString, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AttitudeType)[] = {
              { Py_tp_methods, t_AttitudeType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AttitudeType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AttitudeType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AttitudeType, t_AttitudeType, AttitudeType);
            PyObject *t_AttitudeType::wrap_Object(const AttitudeType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AttitudeType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AttitudeType *self = (t_AttitudeType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AttitudeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AttitudeType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AttitudeType *self = (t_AttitudeType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AttitudeType::install(PyObject *module)
            {
              installType(&PY_TYPE(AttitudeType), &PY_TYPE_DEF(AttitudeType), module, "AttitudeType", 0);
            }

            void t_AttitudeType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "class_", make_descriptor(AttitudeType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "wrapfn_", make_descriptor(t_AttitudeType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AttitudeType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE_ANGVEL", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE_ANGVEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE_DERIVATIVE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE_DERIVATIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_ANGVEL", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_ANGVEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_DERIVATIVE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_DERIVATIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_EULER_RATES", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_EULER_RATES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN_NUTATION", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN_NUTATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN_NUTATION_MOMENTUM", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN_NUTATION_MOMENTUM)));
            }

            static PyObject *t_AttitudeType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AttitudeType::initializeClass, 1)))
                return NULL;
              return t_AttitudeType::wrap_Object(AttitudeType(((t_AttitudeType *) arg)->object.this$));
            }
            static PyObject *t_AttitudeType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AttitudeType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AttitudeType_of_(t_AttitudeType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AttitudeType_build(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk[D", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.build(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "build", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_createDataFields(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::utils::TimeStampedAngularCoordinates a4((jobject) NULL);
              JArray< ::java::lang::String > result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4))
              {
                OBJ_CALL(result = self->object.createDataFields(a0, a1, a2, a3, a4));
                return JArray<jstring>(result.this$).wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "createDataFields", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_generateData(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::utils::TimeStampedAngularCoordinates a4((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4))
              {
                OBJ_CALL(result = self->object.generateData(a0, a1, a2, a3, a4));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "generateData", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_getAngularDerivativesFilter(t_AttitudeType *self)
            {
              ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
              OBJ_CALL(result = self->object.getAngularDerivativesFilter());
              return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
            }

            static PyObject *t_AttitudeType_getName(t_AttitudeType *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getName", arg);
              return NULL;
            }

            static PyObject *t_AttitudeType_parse(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::files::ccsds::utils::ContextBinding a4((jobject) NULL);
              JArray< ::java::lang::String > a5((jobject) NULL);
              ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk[s", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.parse(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parse", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_parseType(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              AttitudeType result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::parseType(a0));
                return t_AttitudeType::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "parseType", arg);
              return NULL;
            }

            static PyObject *t_AttitudeType_toString(t_AttitudeType *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(AttitudeType), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_AttitudeType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AttitudeType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::valueOf(a0));
                return t_AttitudeType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AttitudeType_values(PyTypeObject *type)
            {
              JArray< AttitudeType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::values());
              return JArray<jobject>(result.this$).wrap(t_AttitudeType::wrap_jobject);
            }
            static PyObject *t_AttitudeType_get__parameters_(t_AttitudeType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AttitudeType_get__angularDerivativesFilter(t_AttitudeType *self, void *data)
            {
              ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
              OBJ_CALL(value = self->object.getAngularDerivativesFilter());
              return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor$MaxCountExceededCallback::class$ = NULL;
      jmethodID *Incrementor$MaxCountExceededCallback::mids$ = NULL;
      bool Incrementor$MaxCountExceededCallback::live$ = false;

      jclass Incrementor$MaxCountExceededCallback::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor$MaxCountExceededCallback");

          mids$ = new jmethodID[max_mid];
          mids$[mid_trigger_44ed599e93e8a30c] = env->getMethodID(cls, "trigger", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Incrementor$MaxCountExceededCallback::trigger(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_trigger_44ed599e93e8a30c], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg);

      static PyMethodDef t_Incrementor$MaxCountExceededCallback__methods_[] = {
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, trigger, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor$MaxCountExceededCallback)[] = {
        { Py_tp_methods, t_Incrementor$MaxCountExceededCallback__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor$MaxCountExceededCallback)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor$MaxCountExceededCallback, t_Incrementor$MaxCountExceededCallback, Incrementor$MaxCountExceededCallback);

      void t_Incrementor$MaxCountExceededCallback::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor$MaxCountExceededCallback), &PY_TYPE_DEF(Incrementor$MaxCountExceededCallback), module, "Incrementor$MaxCountExceededCallback", 0);
      }

      void t_Incrementor$MaxCountExceededCallback::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "class_", make_descriptor(Incrementor$MaxCountExceededCallback::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "wrapfn_", make_descriptor(t_Incrementor$MaxCountExceededCallback::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 1)))
          return NULL;
        return t_Incrementor$MaxCountExceededCallback::wrap_Object(Incrementor$MaxCountExceededCallback(((t_Incrementor$MaxCountExceededCallback *) arg)->object.this$));
      }
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.trigger(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "trigger", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *OffsetModel::class$ = NULL;
      jmethodID *OffsetModel::mids$ = NULL;
      bool OffsetModel::live$ = false;

      jclass OffsetModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/OffsetModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f29ffa06e1edc0fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_7d5386bebd395718] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;IDD)V");
          mids$[mid_getMJDRef_55546ef6a647f39b] = env->getMethodID(cls, "getMJDRef", "()I");
          mids$[mid_getOffset_b74f83833fdad017] = env->getMethodID(cls, "getOffset", "()D");
          mids$[mid_getSlope_b74f83833fdad017] = env->getMethodID(cls, "getSlope", "()D");
          mids$[mid_getStart_357436921b6db81c] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/DateComponents;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f29ffa06e1edc0fc, a0.this$, a1)) {}

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d5386bebd395718, a0.this$, a1, a2, a3)) {}

      jint OffsetModel::getMJDRef() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJDRef_55546ef6a647f39b]);
      }

      jdouble OffsetModel::getOffset() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_b74f83833fdad017]);
      }

      jdouble OffsetModel::getSlope() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSlope_b74f83833fdad017]);
      }

      ::org::orekit::time::DateComponents OffsetModel::getStart() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getStart_357436921b6db81c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_OffsetModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OffsetModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OffsetModel_init_(t_OffsetModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OffsetModel_getMJDRef(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getOffset(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getSlope(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getStart(t_OffsetModel *self);
      static PyObject *t_OffsetModel_get__mJDRef(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__offset(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__slope(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__start(t_OffsetModel *self, void *data);
      static PyGetSetDef t_OffsetModel__fields_[] = {
        DECLARE_GET_FIELD(t_OffsetModel, mJDRef),
        DECLARE_GET_FIELD(t_OffsetModel, offset),
        DECLARE_GET_FIELD(t_OffsetModel, slope),
        DECLARE_GET_FIELD(t_OffsetModel, start),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OffsetModel__methods_[] = {
        DECLARE_METHOD(t_OffsetModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OffsetModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OffsetModel, getMJDRef, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getOffset, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getSlope, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OffsetModel)[] = {
        { Py_tp_methods, t_OffsetModel__methods_ },
        { Py_tp_init, (void *) t_OffsetModel_init_ },
        { Py_tp_getset, t_OffsetModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OffsetModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OffsetModel, t_OffsetModel, OffsetModel);

      void t_OffsetModel::install(PyObject *module)
      {
        installType(&PY_TYPE(OffsetModel), &PY_TYPE_DEF(OffsetModel), module, "OffsetModel", 0);
      }

      void t_OffsetModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "class_", make_descriptor(OffsetModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "wrapfn_", make_descriptor(t_OffsetModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OffsetModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OffsetModel::initializeClass, 1)))
          return NULL;
        return t_OffsetModel::wrap_Object(OffsetModel(((t_OffsetModel *) arg)->object.this$));
      }
      static PyObject *t_OffsetModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OffsetModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OffsetModel_init_(t_OffsetModel *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            jint a1;
            OffsetModel object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OffsetModel(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            jint a1;
            jdouble a2;
            jdouble a3;
            OffsetModel object((jobject) NULL);

            if (!parseArgs(args, "kIDD", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OffsetModel(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OffsetModel_getMJDRef(t_OffsetModel *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJDRef());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OffsetModel_getOffset(t_OffsetModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOffset());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OffsetModel_getSlope(t_OffsetModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSlope());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OffsetModel_getStart(t_OffsetModel *self)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getStart());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_OffsetModel_get__mJDRef(t_OffsetModel *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJDRef());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OffsetModel_get__offset(t_OffsetModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOffset());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OffsetModel_get__slope(t_OffsetModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSlope());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OffsetModel_get__start(t_OffsetModel *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getStart());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/FESCHatEpsilonReader.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "java/lang/Double.h"
#include "java/io/IOException.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCHatEpsilonReader::class$ = NULL;
          jmethodID *FESCHatEpsilonReader::mids$ = NULL;
          bool FESCHatEpsilonReader::live$ = false;

          jclass FESCHatEpsilonReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCHatEpsilonReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a858ce5fad253009] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;Ljava/util/Map;)V");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCHatEpsilonReader::FESCHatEpsilonReader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a3, const ::java::util::Map & a4) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_a858ce5fad253009, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          void FESCHatEpsilonReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args);

          static PyMethodDef t_FESCHatEpsilonReader__methods_[] = {
            DECLARE_METHOD(t_FESCHatEpsilonReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCHatEpsilonReader)[] = {
            { Py_tp_methods, t_FESCHatEpsilonReader__methods_ },
            { Py_tp_init, (void *) t_FESCHatEpsilonReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCHatEpsilonReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCHatEpsilonReader, t_FESCHatEpsilonReader, FESCHatEpsilonReader);

          void t_FESCHatEpsilonReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCHatEpsilonReader), &PY_TYPE_DEF(FESCHatEpsilonReader), module, "FESCHatEpsilonReader", 0);
          }

          void t_FESCHatEpsilonReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "class_", make_descriptor(FESCHatEpsilonReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "wrapfn_", make_descriptor(t_FESCHatEpsilonReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCHatEpsilonReader::initializeClass, 1)))
              return NULL;
            return t_FESCHatEpsilonReader::wrap_Object(FESCHatEpsilonReader(((t_FESCHatEpsilonReader *) arg)->object.this$));
          }
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCHatEpsilonReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::util::Map a4((jobject) NULL);
            PyTypeObject **p4;
            FESCHatEpsilonReader object((jobject) NULL);

            if (!parseArgs(args, "sDDKK", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_, &a4, &p4, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FESCHatEpsilonReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCHatEpsilonReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1045Data::class$ = NULL;
              jmethodID *Rtcm1045Data::mids$ = NULL;
              bool Rtcm1045Data::live$ = false;

              jclass Rtcm1045Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGalileoDataValidityStatus_55546ef6a647f39b] = env->getMethodID(cls, "getGalileoDataValidityStatus", "()I");
                  mids$[mid_getGalileoNavigationMessage_b00c07a02685c9e6] = env->getMethodID(cls, "getGalileoNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoNavigationMessage_be30f17c04372fa7] = env->getMethodID(cls, "getGalileoNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoToc_b74f83833fdad017] = env->getMethodID(cls, "getGalileoToc", "()D");
                  mids$[mid_setGalileoDataValidityStatus_44ed599e93e8a30c] = env->getMethodID(cls, "setGalileoDataValidityStatus", "(I)V");
                  mids$[mid_setGalileoNavigationMessage_4e33736c19a56ff8] = env->getMethodID(cls, "setGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
                  mids$[mid_setGalileoToc_8ba9fe7a847cecad] = env->getMethodID(cls, "setGalileoToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045Data::Rtcm1045Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint Rtcm1045Data::getGalileoDataValidityStatus() const
              {
                return env->callIntMethod(this$, mids$[mid_getGalileoDataValidityStatus_55546ef6a647f39b]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_b00c07a02685c9e6]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_be30f17c04372fa7], a0.this$));
              }

              jdouble Rtcm1045Data::getGalileoToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGalileoToc_b74f83833fdad017]);
              }

              void Rtcm1045Data::setGalileoDataValidityStatus(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoDataValidityStatus_44ed599e93e8a30c], a0);
              }

              void Rtcm1045Data::setGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoNavigationMessage_4e33736c19a56ff8], a0.this$);
              }

              void Rtcm1045Data::setGalileoToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoToc_8ba9fe7a847cecad], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1045Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1045Data_init_(t_Rtcm1045Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1045Data_getGalileoDataValidityStatus(t_Rtcm1045Data *self);
              static PyObject *t_Rtcm1045Data_getGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *args);
              static PyObject *t_Rtcm1045Data_getGalileoToc(t_Rtcm1045Data *self);
              static PyObject *t_Rtcm1045Data_setGalileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_setGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_setGalileoToc(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_get__galileoDataValidityStatus(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1045Data_get__galileoNavigationMessage(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1045Data_get__galileoToc(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoToc(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1045Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoDataValidityStatus),
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1045Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1045Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoDataValidityStatus, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoDataValidityStatus, METH_O),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1045Data)[] = {
                { Py_tp_methods, t_Rtcm1045Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1045Data_init_ },
                { Py_tp_getset, t_Rtcm1045Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1045Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1045Data, t_Rtcm1045Data, Rtcm1045Data);

              void t_Rtcm1045Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1045Data), &PY_TYPE_DEF(Rtcm1045Data), module, "Rtcm1045Data", 0);
              }

              void t_Rtcm1045Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "class_", make_descriptor(Rtcm1045Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "wrapfn_", make_descriptor(t_Rtcm1045Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1045Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1045Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1045Data::wrap_Object(Rtcm1045Data(((t_Rtcm1045Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1045Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1045Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1045Data_init_(t_Rtcm1045Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1045Data object((jobject) NULL);

                INT_CALL(object = Rtcm1045Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1045Data_getGalileoDataValidityStatus(t_Rtcm1045Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGalileoDataValidityStatus());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1045Data_getGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGalileoNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGalileoNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGalileoNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_getGalileoToc(t_Rtcm1045Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGalileoToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1045Data_setGalileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGalileoDataValidityStatus(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoDataValidityStatus", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_setGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGalileoNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_setGalileoToc(t_Rtcm1045Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGalileoToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_get__galileoDataValidityStatus(t_Rtcm1045Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGalileoDataValidityStatus());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1045Data_set__galileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGalileoDataValidityStatus(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoDataValidityStatus", arg);
                return -1;
              }

              static PyObject *t_Rtcm1045Data_get__galileoNavigationMessage(t_Rtcm1045Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGalileoNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1045Data_set__galileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGalileoNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1045Data_get__galileoToc(t_Rtcm1045Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGalileoToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1045Data_set__galileoToc(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGalileoToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoToc", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame$LOFBuilderVector::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame$LOFBuilderVector::mids$ = NULL;
      bool LocalMagneticFieldFrame$LOFBuilderVector::live$ = false;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY = NULL;

      jclass LocalMagneticFieldFrame$LOFBuilderVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_162f8dd74dfd19a3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");
          mids$[mid_values_dff922766d1166ca] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MINUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame$LOFBuilderVector LocalMagneticFieldFrame$LOFBuilderVector::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalMagneticFieldFrame$LOFBuilderVector(env->callStaticObjectMethod(cls, mids$[mid_valueOf_162f8dd74dfd19a3], a0.this$));
      }

      JArray< LocalMagneticFieldFrame$LOFBuilderVector > LocalMagneticFieldFrame$LOFBuilderVector::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalMagneticFieldFrame$LOFBuilderVector >(env->callStaticObjectMethod(cls, mids$[mid_values_dff922766d1166ca]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame$LOFBuilderVector__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame$LOFBuilderVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame$LOFBuilderVector__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame$LOFBuilderVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalMagneticFieldFrame$LOFBuilderVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame$LOFBuilderVector, t_LocalMagneticFieldFrame$LOFBuilderVector, LocalMagneticFieldFrame$LOFBuilderVector);
      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(const LocalMagneticFieldFrame$LOFBuilderVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), &PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector), module, "LocalMagneticFieldFrame$LOFBuilderVector", 0);
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "class_", make_descriptor(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY)));
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(LocalMagneticFieldFrame$LOFBuilderVector(((t_LocalMagneticFieldFrame$LOFBuilderVector *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalMagneticFieldFrame$LOFBuilderVector result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::valueOf(a0));
          return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type)
      {
        JArray< LocalMagneticFieldFrame$LOFBuilderVector > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::values());
        return JArray<jobject>(result.this$).wrap(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject);
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmWriter::class$ = NULL;
          jmethodID *NdmWriter::mids$ = NULL;
          bool NdmWriter::live$ = false;

          jclass NdmWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d1bd2379c0ce7d1d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/WriterBuilder;)V");
              mids$[mid_writeComment_5137311c5e1f4222] = env->getMethodID(cls, "writeComment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Ljava/lang/String;)V");
              mids$[mid_writeConstituent_a4b14e3c29843c15] = env->getMethodID(cls, "writeConstituent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
              mids$[mid_writeMessage_54066cebbf925d3b] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/Ndm;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NdmWriter::NdmWriter(const ::org::orekit::files::ccsds::ndm::WriterBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d1bd2379c0ce7d1d, a0.this$)) {}

          void NdmWriter::writeComment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeComment_5137311c5e1f4222], a0.this$, a1.this$);
          }

          void NdmWriter::writeConstituent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeConstituent_a4b14e3c29843c15], a0.this$, a1.this$);
          }

          void NdmWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::Ndm & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeMessage_54066cebbf925d3b], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args);

          static PyMethodDef t_NdmWriter__methods_[] = {
            DECLARE_METHOD(t_NdmWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, writeComment, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeConstituent, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeMessage, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmWriter)[] = {
            { Py_tp_methods, t_NdmWriter__methods_ },
            { Py_tp_init, (void *) t_NdmWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmWriter, t_NdmWriter, NdmWriter);

          void t_NdmWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmWriter), &PY_TYPE_DEF(NdmWriter), module, "NdmWriter", 0);
          }

          void t_NdmWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "class_", make_descriptor(NdmWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "wrapfn_", make_descriptor(t_NdmWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmWriter::initializeClass, 1)))
              return NULL;
            return t_NdmWriter::wrap_Object(NdmWriter(((t_NdmWriter *) arg)->object.this$));
          }
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::ndm::WriterBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            NdmWriter object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::WriterBuilder::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_WriterBuilder::parameters_))
            {
              INT_CALL(object = NdmWriter(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeComment(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeComment", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
            {
              OBJ_CALL(self->object.writeConstituent(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeConstituent", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::Ndm a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::Ndm::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeMessage(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/GillIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GillIntegrator::class$ = NULL;
        jmethodID *GillIntegrator::mids$ = NULL;
        bool GillIntegrator::live$ = false;

        jclass GillIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GillIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_58f7bc25b51febfc] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegrator::GillIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        JArray< JArray< jdouble > > GillIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > GillIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > GillIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data);
        static PyGetSetDef t_GillIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_GillIntegrator, a),
          DECLARE_GET_FIELD(t_GillIntegrator, b),
          DECLARE_GET_FIELD(t_GillIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillIntegrator__methods_[] = {
          DECLARE_METHOD(t_GillIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegrator)[] = {
          { Py_tp_methods, t_GillIntegrator__methods_ },
          { Py_tp_init, (void *) t_GillIntegrator_init_ },
          { Py_tp_getset, t_GillIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(GillIntegrator, t_GillIntegrator, GillIntegrator);

        void t_GillIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegrator), &PY_TYPE_DEF(GillIntegrator), module, "GillIntegrator", 0);
        }

        void t_GillIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "class_", make_descriptor(GillIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "wrapfn_", make_descriptor(t_GillIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegrator::initializeClass, 1)))
            return NULL;
          return t_GillIntegrator::wrap_Object(GillIntegrator(((t_GillIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver::live$ = false;

        jclass BracketedRealFieldUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_81520b552cb3fa26] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_81520b552cb3fa26] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getRelativeAccuracy_81520b552cb3fa26] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_274432d986e24d18] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_1274323488150eef] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_8bae008bb0de6f76] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");
            mids$[mid_solveInterval_01108cb21dc9897d] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_81520b552cb3fa26]));
        }

        jint BracketedRealFieldUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_81520b552cb3fa26]));
        }

        jint BracketedRealFieldUnivariateSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_81520b552cb3fa26]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_274432d986e24d18], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_1274323488150eef], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_8bae008bb0de6f76], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_01108cb21dc9897d], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver, t_BracketedRealFieldUnivariateSolver, BracketedRealFieldUnivariateSolver);
        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_Object(const BracketedRealFieldUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver), module, "BracketedRealFieldUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval)));
        }

        void t_BracketedRealFieldUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "class_", make_descriptor(BracketedRealFieldUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver::wrap_Object(BracketedRealFieldUnivariateSolver(((t_BracketedRealFieldUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverMeasurement::class$ = NULL;
        jmethodID *GroundReceiverMeasurement::mids$ = NULL;
        bool GroundReceiverMeasurement::live$ = false;

        jclass GroundReceiverMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d9bdb0407e3974de] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_30a9252c5d1ad83a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getGroundStationCoordinates_07353af99808c203] = env->getMethodID(cls, "getGroundStationCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_getGroundStationPosition_982d534f80d70918] = env->getMethodID(cls, "getGroundStationPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getStation_e5278a7660eeb13f] = env->getMethodID(cls, "getStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_isTwoWay_9ab94ac1dc23b105] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_computeCommonParametersWithout_bba369b69f68b754] = env->getMethodID(cls, "computeCommonParametersWithout", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives;");
            mids$[mid_computeCommonParametersWithDerivatives_8bea93b45382b3fc] = env->getMethodID(cls, "computeCommonParametersWithDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_d9bdb0407e3974de, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_30a9252c5d1ad83a, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::utils::PVCoordinates GroundReceiverMeasurement::getGroundStationCoordinates(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getGroundStationCoordinates_07353af99808c203], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GroundReceiverMeasurement::getGroundStationPosition(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getGroundStationPosition_982d534f80d70918], a0.this$));
        }

        ::org::orekit::estimation::measurements::GroundStation GroundReceiverMeasurement::getStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getStation_e5278a7660eeb13f]));
        }

        jboolean GroundReceiverMeasurement::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_9ab94ac1dc23b105]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_GroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_of_(t_GroundReceiverMeasurement *self, PyObject *args);
        static int t_GroundReceiverMeasurement_init_(t_GroundReceiverMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverMeasurement_getGroundStationCoordinates(t_GroundReceiverMeasurement *self, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_getGroundStationPosition(t_GroundReceiverMeasurement *self, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_getStation(t_GroundReceiverMeasurement *self);
        static PyObject *t_GroundReceiverMeasurement_isTwoWay(t_GroundReceiverMeasurement *self);
        static PyObject *t_GroundReceiverMeasurement_get__station(t_GroundReceiverMeasurement *self, void *data);
        static PyObject *t_GroundReceiverMeasurement_get__twoWay(t_GroundReceiverMeasurement *self, void *data);
        static PyObject *t_GroundReceiverMeasurement_get__parameters_(t_GroundReceiverMeasurement *self, void *data);
        static PyGetSetDef t_GroundReceiverMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverMeasurement, station),
          DECLARE_GET_FIELD(t_GroundReceiverMeasurement, twoWay),
          DECLARE_GET_FIELD(t_GroundReceiverMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverMeasurement__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, getGroundStationCoordinates, METH_O),
          DECLARE_METHOD(t_GroundReceiverMeasurement, getGroundStationPosition, METH_O),
          DECLARE_METHOD(t_GroundReceiverMeasurement, getStation, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, isTwoWay, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverMeasurement)[] = {
          { Py_tp_methods, t_GroundReceiverMeasurement__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverMeasurement_init_ },
          { Py_tp_getset, t_GroundReceiverMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(GroundReceiverMeasurement, t_GroundReceiverMeasurement, GroundReceiverMeasurement);
        PyObject *t_GroundReceiverMeasurement::wrap_Object(const GroundReceiverMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundReceiverMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundReceiverMeasurement *self = (t_GroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundReceiverMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundReceiverMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundReceiverMeasurement *self = (t_GroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundReceiverMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverMeasurement), &PY_TYPE_DEF(GroundReceiverMeasurement), module, "GroundReceiverMeasurement", 0);
        }

        void t_GroundReceiverMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverMeasurement), "class_", make_descriptor(GroundReceiverMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverMeasurement), "wrapfn_", make_descriptor(t_GroundReceiverMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverMeasurement::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverMeasurement::wrap_Object(GroundReceiverMeasurement(((t_GroundReceiverMeasurement *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundReceiverMeasurement_of_(t_GroundReceiverMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundReceiverMeasurement_init_(t_GroundReceiverMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              GroundReceiverMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kZk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = GroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              GroundReceiverMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = GroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundReceiverMeasurement_getGroundStationCoordinates(t_GroundReceiverMeasurement *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getGroundStationCoordinates(a0));
            return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getGroundStationCoordinates", arg);
          return NULL;
        }

        static PyObject *t_GroundReceiverMeasurement_getGroundStationPosition(t_GroundReceiverMeasurement *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getGroundStationPosition(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getGroundStationPosition", arg);
          return NULL;
        }

        static PyObject *t_GroundReceiverMeasurement_getStation(t_GroundReceiverMeasurement *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverMeasurement_isTwoWay(t_GroundReceiverMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTwoWay());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_GroundReceiverMeasurement_get__parameters_(t_GroundReceiverMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GroundReceiverMeasurement_get__station(t_GroundReceiverMeasurement *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverMeasurement_get__twoWay(t_GroundReceiverMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTwoWay());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventOccurrence::class$ = NULL;
        jmethodID *FieldEventOccurrence::mids$ = NULL;
        bool FieldEventOccurrence::live$ = false;

        jclass FieldEventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_01ca61c1289311a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAction_0afc8c14772bbac8] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_fa7b8b5f8bf2a1ec] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_getStopTime_81520b552cb3fa26] = env->getMethodID(cls, "getStopTime", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventOccurrence::FieldEventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01ca61c1289311a5, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::ode::events::Action FieldEventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_0afc8c14772bbac8]));
        }

        ::org::hipparchus::ode::FieldODEState FieldEventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_getNewState_fa7b8b5f8bf2a1ec]));
        }

        ::org::hipparchus::CalculusFieldElement FieldEventOccurrence::getStopTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getStopTime_81520b552cb3fa26]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args);
        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, stopTime),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventOccurrence__methods_ },
          { Py_tp_init, (void *) t_FieldEventOccurrence_init_ },
          { Py_tp_getset, t_FieldEventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventOccurrence, t_FieldEventOccurrence, FieldEventOccurrence);
        PyObject *t_FieldEventOccurrence::wrap_Object(const FieldEventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventOccurrence), &PY_TYPE_DEF(FieldEventOccurrence), module, "FieldEventOccurrence", 0);
        }

        void t_FieldEventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "class_", make_descriptor(FieldEventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "wrapfn_", make_descriptor(t_FieldEventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventOccurrence::wrap_Object(FieldEventOccurrence(((t_FieldEventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldEventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *Relationship::class$ = NULL;
        jmethodID *Relationship::mids$ = NULL;
        bool Relationship::live$ = false;
        Relationship *Relationship::EQ = NULL;
        Relationship *Relationship::GEQ = NULL;
        Relationship *Relationship::LEQ = NULL;

        jclass Relationship::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/Relationship");

            mids$ = new jmethodID[max_mid];
            mids$[mid_oppositeRelationship_8ee3b6cbb19ddabb] = env->getMethodID(cls, "oppositeRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_valueOf_65f671fb37201130] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_values_0cef10505569983a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/Relationship;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EQ = new Relationship(env->getStaticObjectField(cls, "EQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            GEQ = new Relationship(env->getStaticObjectField(cls, "GEQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            LEQ = new Relationship(env->getStaticObjectField(cls, "LEQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Relationship Relationship::oppositeRelationship() const
        {
          return Relationship(env->callObjectMethod(this$, mids$[mid_oppositeRelationship_8ee3b6cbb19ddabb]));
        }

        ::java::lang::String Relationship::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
        }

        Relationship Relationship::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Relationship(env->callStaticObjectMethod(cls, mids$[mid_valueOf_65f671fb37201130], a0.this$));
        }

        JArray< Relationship > Relationship::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Relationship >(env->callStaticObjectMethod(cls, mids$[mid_values_0cef10505569983a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        static PyObject *t_Relationship_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relationship_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relationship_of_(t_Relationship *self, PyObject *args);
        static PyObject *t_Relationship_oppositeRelationship(t_Relationship *self);
        static PyObject *t_Relationship_toString(t_Relationship *self, PyObject *args);
        static PyObject *t_Relationship_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Relationship_values(PyTypeObject *type);
        static PyObject *t_Relationship_get__parameters_(t_Relationship *self, void *data);
        static PyGetSetDef t_Relationship__fields_[] = {
          DECLARE_GET_FIELD(t_Relationship, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Relationship__methods_[] = {
          DECLARE_METHOD(t_Relationship, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relationship, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relationship, of_, METH_VARARGS),
          DECLARE_METHOD(t_Relationship, oppositeRelationship, METH_NOARGS),
          DECLARE_METHOD(t_Relationship, toString, METH_VARARGS),
          DECLARE_METHOD(t_Relationship, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Relationship, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Relationship)[] = {
          { Py_tp_methods, t_Relationship__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Relationship__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Relationship)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Relationship, t_Relationship, Relationship);
        PyObject *t_Relationship::wrap_Object(const Relationship& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Relationship::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Relationship *self = (t_Relationship *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Relationship::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Relationship::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Relationship *self = (t_Relationship *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Relationship::install(PyObject *module)
        {
          installType(&PY_TYPE(Relationship), &PY_TYPE_DEF(Relationship), module, "Relationship", 0);
        }

        void t_Relationship::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "class_", make_descriptor(Relationship::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "wrapfn_", make_descriptor(t_Relationship::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "boxfn_", make_descriptor(boxObject));
          env->getClass(Relationship::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "EQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::EQ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "GEQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::GEQ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "LEQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::LEQ)));
        }

        static PyObject *t_Relationship_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Relationship::initializeClass, 1)))
            return NULL;
          return t_Relationship::wrap_Object(Relationship(((t_Relationship *) arg)->object.this$));
        }
        static PyObject *t_Relationship_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Relationship::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Relationship_of_(t_Relationship *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Relationship_oppositeRelationship(t_Relationship *self)
        {
          Relationship result((jobject) NULL);
          OBJ_CALL(result = self->object.oppositeRelationship());
          return t_Relationship::wrap_Object(result);
        }

        static PyObject *t_Relationship_toString(t_Relationship *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(Relationship), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_Relationship_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Relationship result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::optim::linear::Relationship::valueOf(a0));
            return t_Relationship::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Relationship_values(PyTypeObject *type)
        {
          JArray< Relationship > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::optim::linear::Relationship::values());
          return JArray<jobject>(result.this$).wrap(t_Relationship::wrap_jobject);
        }
        static PyObject *t_Relationship_get__parameters_(t_Relationship *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well512a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well512a::class$ = NULL;
      jmethodID *Well512a::mids$ = NULL;
      bool Well512a::live$ = false;

      jclass Well512a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well512a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well512a::Well512a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      Well512a::Well512a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

      Well512a::Well512a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      Well512a::Well512a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jint Well512a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args);

      static PyMethodDef t_Well512a__methods_[] = {
        DECLARE_METHOD(t_Well512a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well512a)[] = {
        { Py_tp_methods, t_Well512a__methods_ },
        { Py_tp_init, (void *) t_Well512a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well512a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well512a, t_Well512a, Well512a);

      void t_Well512a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well512a), &PY_TYPE_DEF(Well512a), module, "Well512a", 0);
      }

      void t_Well512a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "class_", make_descriptor(Well512a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "wrapfn_", make_descriptor(t_Well512a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well512a::initializeClass, 1)))
          return NULL;
        return t_Well512a::wrap_Object(Well512a(((t_Well512a *) arg)->object.this$));
      }
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well512a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well512a object((jobject) NULL);

            INT_CALL(object = Well512a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well512a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeVectorFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeVectorFunction::class$ = NULL;
      jmethodID *PythonTimeVectorFunction::mids$ = NULL;
      bool PythonTimeVectorFunction::live$ = false;

      jclass PythonTimeVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_27b701db396ade01] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_954ad4b53022f84b] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeVectorFunction::PythonTimeVectorFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTimeVectorFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTimeVectorFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTimeVectorFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonTimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeVectorFunction_init_(t_PythonTimeVectorFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeVectorFunction_finalize(t_PythonTimeVectorFunction *self);
      static PyObject *t_PythonTimeVectorFunction_pythonExtension(t_PythonTimeVectorFunction *self, PyObject *args);
      static void JNICALL t_PythonTimeVectorFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeVectorFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeVectorFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonTimeVectorFunction_get__self(t_PythonTimeVectorFunction *self, void *data);
      static PyGetSetDef t_PythonTimeVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeVectorFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeVectorFunction__methods_[] = {
        DECLARE_METHOD(t_PythonTimeVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeVectorFunction)[] = {
        { Py_tp_methods, t_PythonTimeVectorFunction__methods_ },
        { Py_tp_init, (void *) t_PythonTimeVectorFunction_init_ },
        { Py_tp_getset, t_PythonTimeVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeVectorFunction, t_PythonTimeVectorFunction, PythonTimeVectorFunction);

      void t_PythonTimeVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeVectorFunction), &PY_TYPE_DEF(PythonTimeVectorFunction), module, "PythonTimeVectorFunction", 1);
      }

      void t_PythonTimeVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "class_", make_descriptor(PythonTimeVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "wrapfn_", make_descriptor(t_PythonTimeVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeVectorFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeVectorFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonTimeVectorFunction_value1 },
          { "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeVectorFunction_value2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeVectorFunction::initializeClass, 1)))
          return NULL;
        return t_PythonTimeVectorFunction::wrap_Object(PythonTimeVectorFunction(((t_PythonTimeVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeVectorFunction_init_(t_PythonTimeVectorFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeVectorFunction object((jobject) NULL);

        INT_CALL(object = PythonTimeVectorFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeVectorFunction_finalize(t_PythonTimeVectorFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeVectorFunction_pythonExtension(t_PythonTimeVectorFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonTimeVectorFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeVectorFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonTimeVectorFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static PyObject *t_PythonTimeVectorFunction_get__self(t_PythonTimeVectorFunction *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cos.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cos::class$ = NULL;
        jmethodID *Cos::mids$ = NULL;
        bool Cos::live$ = false;

        jclass Cos::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cos");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cos::Cos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Cos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cos_value(t_Cos *self, PyObject *args);

        static PyMethodDef t_Cos__methods_[] = {
          DECLARE_METHOD(t_Cos, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cos)[] = {
          { Py_tp_methods, t_Cos__methods_ },
          { Py_tp_init, (void *) t_Cos_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cos)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cos, t_Cos, Cos);

        void t_Cos::install(PyObject *module)
        {
          installType(&PY_TYPE(Cos), &PY_TYPE_DEF(Cos), module, "Cos", 0);
        }

        void t_Cos::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "class_", make_descriptor(Cos::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "wrapfn_", make_descriptor(t_Cos::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cos::initializeClass, 1)))
            return NULL;
          return t_Cos::wrap_Object(Cos(((t_Cos *) arg)->object.this$));
        }
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cos::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds)
        {
          Cos object((jobject) NULL);

          INT_CALL(object = Cos());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cos_value(t_Cos *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}

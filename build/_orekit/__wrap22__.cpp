#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *VersionedITRF::class$ = NULL;
      jmethodID *VersionedITRF::mids$ = NULL;
      bool VersionedITRF::live$ = false;

      jclass VersionedITRF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/VersionedITRF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getITRFVersion_4865f340ec39b9c4] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion VersionedITRF::getITRFVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_4865f340ec39b9c4]));
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
      static PyObject *t_VersionedITRF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VersionedITRF_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VersionedITRF_getITRFVersion(t_VersionedITRF *self);
      static PyObject *t_VersionedITRF_get__iTRFVersion(t_VersionedITRF *self, void *data);
      static PyGetSetDef t_VersionedITRF__fields_[] = {
        DECLARE_GET_FIELD(t_VersionedITRF, iTRFVersion),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VersionedITRF__methods_[] = {
        DECLARE_METHOD(t_VersionedITRF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VersionedITRF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VersionedITRF, getITRFVersion, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VersionedITRF)[] = {
        { Py_tp_methods, t_VersionedITRF__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_VersionedITRF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VersionedITRF)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(VersionedITRF, t_VersionedITRF, VersionedITRF);

      void t_VersionedITRF::install(PyObject *module)
      {
        installType(&PY_TYPE(VersionedITRF), &PY_TYPE_DEF(VersionedITRF), module, "VersionedITRF", 0);
      }

      void t_VersionedITRF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "class_", make_descriptor(VersionedITRF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "wrapfn_", make_descriptor(t_VersionedITRF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VersionedITRF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VersionedITRF::initializeClass, 1)))
          return NULL;
        return t_VersionedITRF::wrap_Object(VersionedITRF(((t_VersionedITRF *) arg)->object.this$));
      }
      static PyObject *t_VersionedITRF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VersionedITRF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_VersionedITRF_getITRFVersion(t_VersionedITRF *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getITRFVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_VersionedITRF_get__iTRFVersion(t_VersionedITRF *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getITRFVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetectorsProvider::class$ = NULL;
        jmethodID *EventDetectorsProvider::mids$ = NULL;
        bool EventDetectorsProvider::live$ = false;
        jdouble EventDetectorsProvider::DATATION_ACCURACY = (jdouble) 0;

        jclass EventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getEventDetectors_951f9571abe096f0] = env->getMethodID(cls, "getEventDetectors", "(Ljava/util/List;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_c431176e53847efa] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;Ljava/util/List;)Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATATION_ACCURACY = env->getStaticDoubleField(cls, "DATATION_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors(const ::java::util::List & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_951f9571abe096f0], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0, const ::java::util::List & a1) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_c431176e53847efa], a0.this$, a1.this$));
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
      namespace events {
        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data);
        static PyGetSetDef t_EventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetectorsProvider, eventDetectors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_EventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, getEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_EventDetectorsProvider, getFieldEventDetectors, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetectorsProvider)[] = {
          { Py_tp_methods, t_EventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetectorsProvider, t_EventDetectorsProvider, EventDetectorsProvider);

        void t_EventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetectorsProvider), &PY_TYPE_DEF(EventDetectorsProvider), module, "EventDetectorsProvider", 0);
        }

        void t_EventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "class_", make_descriptor(EventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "wrapfn_", make_descriptor(t_EventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EventDetectorsProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "DATATION_ACCURACY", make_descriptor(EventDetectorsProvider::DATATION_ACCURACY));
        }

        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_EventDetectorsProvider::wrap_Object(EventDetectorsProvider(((t_EventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }
            break;
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0, a1));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1044Data::class$ = NULL;
              jmethodID *Rtcm1044Data::mids$ = NULL;
              bool Rtcm1044Data::live$ = false;

              jclass Rtcm1044Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getQzssCodeOnL2_d6ab429752e7c267] = env->getMethodID(cls, "getQzssCodeOnL2", "()I");
                  mids$[mid_getQzssFitInterval_d6ab429752e7c267] = env->getMethodID(cls, "getQzssFitInterval", "()I");
                  mids$[mid_getQzssNavigationMessage_815b18da959df03f] = env->getMethodID(cls, "getQzssNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssNavigationMessage_26a7529e5c4522ab] = env->getMethodID(cls, "getQzssNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssToc_9981f74b2d109da6] = env->getMethodID(cls, "getQzssToc", "()D");
                  mids$[mid_setQzssCodeOnL2_8fd427ab23829bf5] = env->getMethodID(cls, "setQzssCodeOnL2", "(I)V");
                  mids$[mid_setQzssFitInterval_8fd427ab23829bf5] = env->getMethodID(cls, "setQzssFitInterval", "(I)V");
                  mids$[mid_setQzssNavigationMessage_6f75ae7b1b0acd17] = env->getMethodID(cls, "setQzssNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
                  mids$[mid_setQzssToc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setQzssToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044Data::Rtcm1044Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint Rtcm1044Data::getQzssCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssCodeOnL2_d6ab429752e7c267]);
              }

              jint Rtcm1044Data::getQzssFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssFitInterval_d6ab429752e7c267]);
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_815b18da959df03f]));
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_26a7529e5c4522ab], a0.this$));
              }

              jdouble Rtcm1044Data::getQzssToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getQzssToc_9981f74b2d109da6]);
              }

              void Rtcm1044Data::setQzssCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssCodeOnL2_8fd427ab23829bf5], a0);
              }

              void Rtcm1044Data::setQzssFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssFitInterval_8fd427ab23829bf5], a0);
              }

              void Rtcm1044Data::setQzssNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssNavigationMessage_6f75ae7b1b0acd17], a0.this$);
              }

              void Rtcm1044Data::setQzssToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssToc_1ad26e8c8c0cd65b], a0);
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
              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args);
              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1044Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssCodeOnL2),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssFitInterval),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssCodeOnL2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssFitInterval, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssCodeOnL2, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssFitInterval, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044Data)[] = {
                { Py_tp_methods, t_Rtcm1044Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044Data_init_ },
                { Py_tp_getset, t_Rtcm1044Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1044Data, t_Rtcm1044Data, Rtcm1044Data);

              void t_Rtcm1044Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044Data), &PY_TYPE_DEF(Rtcm1044Data), module, "Rtcm1044Data", 0);
              }

              void t_Rtcm1044Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "class_", make_descriptor(Rtcm1044Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "wrapfn_", make_descriptor(t_Rtcm1044Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044Data::wrap_Object(Rtcm1044Data(((t_Rtcm1044Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1044Data object((jobject) NULL);

                INT_CALL(object = Rtcm1044Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getQzssNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getQzssNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getQzssNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getQzssToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssCodeOnL2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssCodeOnL2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssFitInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssFitInterval", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setQzssNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setQzssToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssCodeOnL2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssCodeOnL2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssFitInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssFitInterval", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getQzssNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setQzssNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getQzssToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setQzssToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssToc", arg);
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
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *MessageObserver::class$ = NULL;
          jmethodID *MessageObserver::mids$ = NULL;
          bool MessageObserver::live$ = false;

          jclass MessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/MessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_messageAvailable_39a02157f7808606] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MessageObserver::messageAvailable(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::messages::ParsedMessage & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_messageAvailable_39a02157f7808606], a0.this$, a1.this$);
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
        namespace ntrip {
          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args);

          static PyMethodDef t_MessageObserver__methods_[] = {
            DECLARE_METHOD(t_MessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, messageAvailable, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageObserver)[] = {
            { Py_tp_methods, t_MessageObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageObserver, t_MessageObserver, MessageObserver);

          void t_MessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageObserver), &PY_TYPE_DEF(MessageObserver), module, "MessageObserver", 0);
          }

          void t_MessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "class_", make_descriptor(MessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "wrapfn_", make_descriptor(t_MessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageObserver::initializeClass, 1)))
              return NULL;
            return t_MessageObserver::wrap_Object(MessageObserver(((t_MessageObserver *) arg)->object.this$));
          }
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::messages::ParsedMessage a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.messageAvailable(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "messageAvailable", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionFormat::class$ = NULL;
      jmethodID *FractionFormat::mids$ = NULL;
      bool FractionFormat::live$ = false;

      jclass FractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_2f8f1e4936e49b8d] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_fdb3091a5d795ad8] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_8a939fb9d04314c2] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatFraction_e8c965f9251766d0] = env->getStaticMethodID(cls, "formatFraction", "(Lorg/hipparchus/fraction/Fraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_faf2576acf90261b] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_ba33004fb7b923c8] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getImproperInstance_ad1a698013dd3357] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_ba33004fb7b923c8] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_ad1a698013dd3357] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_parse_1f195ee42b3fc431] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_parse_15ac28a32cea3b83] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getDefaultNumberFormat_525709eb5c5b5ea6] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FractionFormat::FractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_2f8f1e4936e49b8d, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer FractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_fdb3091a5d795ad8], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer FractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_8a939fb9d04314c2], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String FractionFormat::formatFraction(const ::org::hipparchus::fraction::Fraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatFraction_e8c965f9251766d0], a0.this$));
      }

      JArray< ::java::util::Locale > FractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_faf2576acf90261b]));
      }

      FractionFormat FractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_ba33004fb7b923c8]));
      }

      FractionFormat FractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_ad1a698013dd3357], a0.this$));
      }

      FractionFormat FractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_ba33004fb7b923c8]));
      }

      FractionFormat FractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_ad1a698013dd3357], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_1f195ee42b3fc431], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_15ac28a32cea3b83], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data);
      static PyGetSetDef t_FractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_FractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_FractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_FractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionFormat__methods_[] = {
        DECLARE_METHOD(t_FractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_FractionFormat, formatFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionFormat)[] = {
        { Py_tp_methods, t_FractionFormat__methods_ },
        { Py_tp_init, (void *) t_FractionFormat_init_ },
        { Py_tp_getset, t_FractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(FractionFormat, t_FractionFormat, FractionFormat);

      void t_FractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionFormat), &PY_TYPE_DEF(FractionFormat), module, "FractionFormat", 0);
      }

      void t_FractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "class_", make_descriptor(FractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "wrapfn_", make_descriptor(t_FractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionFormat::initializeClass, 1)))
          return NULL;
        return t_FractionFormat::wrap_Object(FractionFormat(((t_FractionFormat *) arg)->object.this$));
      }
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat object((jobject) NULL);

            INT_CALL(object = FractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = FractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FractionFormat(a0, a1));
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

      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::formatFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatFraction", arg);
        return NULL;
      }

      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_FractionFormat::wrap_Object(value);
      }

      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_FractionFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractODEStateInterpolator::mids$ = NULL;
        bool AbstractODEStateInterpolator::live$ = false;

        jclass AbstractODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_abe7a2bda3ab9237] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_abe7a2bda3ab9237] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_abe7a2bda3ab9237] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_dddd5f60deb44228] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_abe7a2bda3ab9237] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_a2f1f68789cc420d] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");
            mids$[mid_computeInterpolatedStateAndDerivatives_90bc3de9207fd930] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/EquationsMapper;DDDD)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getMapper_0209d6833e7fdcb2] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
            mids$[mid_create_1bb88e3499976d05] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_abe7a2bda3ab9237]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_abe7a2bda3ab9237]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_abe7a2bda3ab9237]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_dddd5f60deb44228], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_abe7a2bda3ab9237]));
        }

        jboolean AbstractODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_eee3de00fe971136]);
        }

        jboolean AbstractODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        jboolean AbstractODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_eee3de00fe971136]);
        }

        AbstractODEStateInterpolator AbstractODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return AbstractODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_a2f1f68789cc420d], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEStateInterpolator, t_AbstractODEStateInterpolator, AbstractODEStateInterpolator);

        void t_AbstractODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEStateInterpolator), &PY_TYPE_DEF(AbstractODEStateInterpolator), module, "AbstractODEStateInterpolator", 0);
        }

        void t_AbstractODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "class_", make_descriptor(AbstractODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractODEStateInterpolator::wrap_Object(AbstractODEStateInterpolator(((t_AbstractODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          AbstractODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractODEStateInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuver::class$ = NULL;
              jmethodID *OrbitManeuver::mids$ = NULL;
              bool OrbitManeuver::live$ = false;

              jclass OrbitManeuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAcceleration_032312bdeb3f2f93] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getAccelerationDirectionSigma_9981f74b2d109da6] = env->getMethodID(cls, "getAccelerationDirectionSigma", "()D");
                  mids$[mid_getAccelerationInterpolation_e23534c41f0aed88] = env->getMethodID(cls, "getAccelerationInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getAccelerationMagnitudeSigma_9981f74b2d109da6] = env->getMethodID(cls, "getAccelerationMagnitudeSigma", "()D");
                  mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDeltaMass_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDeployDirSigma_9981f74b2d109da6] = env->getMethodID(cls, "getDeployDirSigma", "()D");
                  mids$[mid_getDeployDv_032312bdeb3f2f93] = env->getMethodID(cls, "getDeployDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeployDvCda_9981f74b2d109da6] = env->getMethodID(cls, "getDeployDvCda", "()D");
                  mids$[mid_getDeployDvRatio_9981f74b2d109da6] = env->getMethodID(cls, "getDeployDvRatio", "()D");
                  mids$[mid_getDeployDvSigma_9981f74b2d109da6] = env->getMethodID(cls, "getDeployDvSigma", "()D");
                  mids$[mid_getDeployId_d2c8eb4129821f0e] = env->getMethodID(cls, "getDeployId", "()Ljava/lang/String;");
                  mids$[mid_getDeployMass_9981f74b2d109da6] = env->getMethodID(cls, "getDeployMass", "()D");
                  mids$[mid_getDuration_9981f74b2d109da6] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getDv_032312bdeb3f2f93] = env->getMethodID(cls, "getDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDvDirSigma_9981f74b2d109da6] = env->getMethodID(cls, "getDvDirSigma", "()D");
                  mids$[mid_getDvMagSigma_9981f74b2d109da6] = env->getMethodID(cls, "getDvMagSigma", "()D");
                  mids$[mid_getThrust_032312bdeb3f2f93] = env->getMethodID(cls, "getThrust", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getThrustDirectionSigma_9981f74b2d109da6] = env->getMethodID(cls, "getThrustDirectionSigma", "()D");
                  mids$[mid_getThrustEfficiency_9981f74b2d109da6] = env->getMethodID(cls, "getThrustEfficiency", "()D");
                  mids$[mid_getThrustInterpolation_e23534c41f0aed88] = env->getMethodID(cls, "getThrustInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getThrustIsp_9981f74b2d109da6] = env->getMethodID(cls, "getThrustIsp", "()D");
                  mids$[mid_getThrustMagnitudeSigma_9981f74b2d109da6] = env->getMethodID(cls, "getThrustMagnitudeSigma", "()D");
                  mids$[mid_setAcceleration_4320462275d66e78] = env->getMethodID(cls, "setAcceleration", "(ID)V");
                  mids$[mid_setAccelerationDirectionSigma_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAccelerationDirectionSigma", "(D)V");
                  mids$[mid_setAccelerationInterpolation_85cc0845124bde4e] = env->getMethodID(cls, "setAccelerationInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setAccelerationMagnitudeSigma_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAccelerationMagnitudeSigma", "(D)V");
                  mids$[mid_setDate_8497861b879c83f7] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDeltaMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDeployDirSigma_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeployDirSigma", "(D)V");
                  mids$[mid_setDeployDv_4320462275d66e78] = env->getMethodID(cls, "setDeployDv", "(ID)V");
                  mids$[mid_setDeployDvCda_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeployDvCda", "(D)V");
                  mids$[mid_setDeployDvRatio_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeployDvRatio", "(D)V");
                  mids$[mid_setDeployDvSigma_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeployDvSigma", "(D)V");
                  mids$[mid_setDeployId_105e1eadb709d9ac] = env->getMethodID(cls, "setDeployId", "(Ljava/lang/String;)V");
                  mids$[mid_setDeployMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeployMass", "(D)V");
                  mids$[mid_setDuration_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setDv_4320462275d66e78] = env->getMethodID(cls, "setDv", "(ID)V");
                  mids$[mid_setDvDirSigma_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDvDirSigma", "(D)V");
                  mids$[mid_setDvMagSigma_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDvMagSigma", "(D)V");
                  mids$[mid_setThrust_4320462275d66e78] = env->getMethodID(cls, "setThrust", "(ID)V");
                  mids$[mid_setThrustDirectionSigma_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setThrustDirectionSigma", "(D)V");
                  mids$[mid_setThrustEfficiency_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setThrustEfficiency", "(D)V");
                  mids$[mid_setThrustInterpolation_85cc0845124bde4e] = env->getMethodID(cls, "setThrustInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setThrustIsp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setThrustIsp", "(D)V");
                  mids$[mid_setThrustMagnitudeSigma_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setThrustMagnitudeSigma", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuver::OrbitManeuver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getAcceleration() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_032312bdeb3f2f93]));
              }

              jdouble OrbitManeuver::getAccelerationDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationDirectionSigma_9981f74b2d109da6]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getAccelerationInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getAccelerationInterpolation_e23534c41f0aed88]));
              }

              jdouble OrbitManeuver::getAccelerationMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationMagnitudeSigma_9981f74b2d109da6]);
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuver::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
              }

              jdouble OrbitManeuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_9981f74b2d109da6]);
              }

              jdouble OrbitManeuver::getDeployDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDirSigma_9981f74b2d109da6]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDeployDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeployDv_032312bdeb3f2f93]));
              }

              jdouble OrbitManeuver::getDeployDvCda() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvCda_9981f74b2d109da6]);
              }

              jdouble OrbitManeuver::getDeployDvRatio() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvRatio_9981f74b2d109da6]);
              }

              jdouble OrbitManeuver::getDeployDvSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvSigma_9981f74b2d109da6]);
              }

              ::java::lang::String OrbitManeuver::getDeployId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeployId_d2c8eb4129821f0e]));
              }

              jdouble OrbitManeuver::getDeployMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployMass_9981f74b2d109da6]);
              }

              jdouble OrbitManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_9981f74b2d109da6]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDv_032312bdeb3f2f93]));
              }

              jdouble OrbitManeuver::getDvDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvDirSigma_9981f74b2d109da6]);
              }

              jdouble OrbitManeuver::getDvMagSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvMagSigma_9981f74b2d109da6]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getThrust() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrust_032312bdeb3f2f93]));
              }

              jdouble OrbitManeuver::getThrustDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustDirectionSigma_9981f74b2d109da6]);
              }

              jdouble OrbitManeuver::getThrustEfficiency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustEfficiency_9981f74b2d109da6]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getThrustInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getThrustInterpolation_e23534c41f0aed88]));
              }

              jdouble OrbitManeuver::getThrustIsp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustIsp_9981f74b2d109da6]);
              }

              jdouble OrbitManeuver::getThrustMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitudeSigma_9981f74b2d109da6]);
              }

              void OrbitManeuver::setAcceleration(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcceleration_4320462275d66e78], a0, a1);
              }

              void OrbitManeuver::setAccelerationDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationDirectionSigma_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setAccelerationInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationInterpolation_85cc0845124bde4e], a0.this$);
              }

              void OrbitManeuver::setAccelerationMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationMagnitudeSigma_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDate_8497861b879c83f7], a0.this$);
              }

              void OrbitManeuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setDeployDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDirSigma_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setDeployDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDv_4320462275d66e78], a0, a1);
              }

              void OrbitManeuver::setDeployDvCda(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvCda_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setDeployDvRatio(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvRatio_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setDeployDvSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvSigma_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setDeployId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployId_105e1eadb709d9ac], a0.this$);
              }

              void OrbitManeuver::setDeployMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployMass_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDv_4320462275d66e78], a0, a1);
              }

              void OrbitManeuver::setDvDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvDirSigma_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setDvMagSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvMagSigma_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setThrust(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrust_4320462275d66e78], a0, a1);
              }

              void OrbitManeuver::setThrustDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustDirectionSigma_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setThrustEfficiency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustEfficiency_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setThrustInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustInterpolation_85cc0845124bde4e], a0.this$);
              }

              void OrbitManeuver::setThrustIsp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustIsp_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuver::setThrustMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustMagnitudeSigma_1ad26e8c8c0cd65b], a0);
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuver__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuver, acceleration),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationMagnitudeSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, date),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deltaMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDirSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, deployDv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvCda),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvRatio),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployId),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, duration),
                DECLARE_GET_FIELD(t_OrbitManeuver, dv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvDirSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvMagSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, thrust),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustEfficiency),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustIsp),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustMagnitudeSigma),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuver__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, getAcceleration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDate, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvCda, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvRatio, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvMagSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustEfficiency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustIsp, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAcceleration, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationMagnitudeSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDate, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvCda, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvRatio, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployId, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDvDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDvMagSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrust, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setThrustDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustEfficiency, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustIsp, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustMagnitudeSigma, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuver)[] = {
                { Py_tp_methods, t_OrbitManeuver__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuver_init_ },
                { Py_tp_getset, t_OrbitManeuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuver)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuver, t_OrbitManeuver, OrbitManeuver);

              void t_OrbitManeuver::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuver), &PY_TYPE_DEF(OrbitManeuver), module, "OrbitManeuver", 0);
              }

              void t_OrbitManeuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "class_", make_descriptor(OrbitManeuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "wrapfn_", make_descriptor(t_OrbitManeuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuver::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuver::wrap_Object(OrbitManeuver(((t_OrbitManeuver *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds)
              {
                OrbitManeuver object((jobject) NULL);

                INT_CALL(object = OrbitManeuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployId());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setAcceleration(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAcceleration", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setAccelerationInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDate", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDeployDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvCda(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvCda", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvRatio(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvRatio", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setDeployId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployId", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvMagSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvMagSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setThrust(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrust", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustEfficiency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustEfficiency", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setThrustInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustIsp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustIsp", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccelerationInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationMagnitudeSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "date", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvCda(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvCda", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvRatio(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvRatio", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployId());
                return j2p(value);
              }
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setDeployId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployId", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvMagSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvMagSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustEfficiency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustEfficiency", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setThrustInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustIsp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustIsp", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustMagnitudeSigma", arg);
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroPhaseModifier::class$ = NULL;
          jmethodID *ShapiroPhaseModifier::mids$ = NULL;
          bool ShapiroPhaseModifier::live$ = false;

          jclass ShapiroPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroPhaseModifier::ShapiroPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          ::java::util::List ShapiroPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void ShapiroPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
        namespace modifiers {
          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self);
          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroPhaseModifier, t_ShapiroPhaseModifier, ShapiroPhaseModifier);

          void t_ShapiroPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroPhaseModifier), &PY_TYPE_DEF(ShapiroPhaseModifier), module, "ShapiroPhaseModifier", 0);
          }

          void t_ShapiroPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "class_", make_descriptor(ShapiroPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroPhaseModifier::wrap_Object(ShapiroPhaseModifier(((t_ShapiroPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitElementsType::class$ = NULL;
              jmethodID *OrbitElementsType::mids$ = NULL;
              bool OrbitElementsType::live$ = false;
              OrbitElementsType *OrbitElementsType::ADBARV = NULL;
              OrbitElementsType *OrbitElementsType::CARTP = NULL;
              OrbitElementsType *OrbitElementsType::CARTPV = NULL;
              OrbitElementsType *OrbitElementsType::CARTPVA = NULL;
              OrbitElementsType *OrbitElementsType::DELAUNAY = NULL;
              OrbitElementsType *OrbitElementsType::DELAUNAYMOD = NULL;
              OrbitElementsType *OrbitElementsType::EIGVAL3EIGVEC3 = NULL;
              OrbitElementsType *OrbitElementsType::EQUINOCTIAL = NULL;
              OrbitElementsType *OrbitElementsType::EQUINOCTIALMOD = NULL;
              OrbitElementsType *OrbitElementsType::GEODETIC = NULL;
              OrbitElementsType *OrbitElementsType::KEPLERIAN = NULL;
              OrbitElementsType *OrbitElementsType::KEPLERIANMEAN = NULL;
              OrbitElementsType *OrbitElementsType::LDBARV = NULL;
              OrbitElementsType *OrbitElementsType::ONSTATION = NULL;
              OrbitElementsType *OrbitElementsType::POINCARE = NULL;

              jclass OrbitElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_d751c1a57012b438] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toCartesian_8bc09b08ce3a501f] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/time/AbsoluteDate;[DLorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_toRawElements_3828301ea6163a12] = env->getMethodID(cls, "toRawElements", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/bodies/OneAxisEllipsoid;D)[D");
                  mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_ed63d354babb827b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_values_216373f79d0e0223] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ADBARV = new OrbitElementsType(env->getStaticObjectField(cls, "ADBARV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTP = new OrbitElementsType(env->getStaticObjectField(cls, "CARTP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTPV = new OrbitElementsType(env->getStaticObjectField(cls, "CARTPV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTPVA = new OrbitElementsType(env->getStaticObjectField(cls, "CARTPVA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  DELAUNAY = new OrbitElementsType(env->getStaticObjectField(cls, "DELAUNAY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  DELAUNAYMOD = new OrbitElementsType(env->getStaticObjectField(cls, "DELAUNAYMOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EIGVAL3EIGVEC3 = new OrbitElementsType(env->getStaticObjectField(cls, "EIGVAL3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EQUINOCTIAL = new OrbitElementsType(env->getStaticObjectField(cls, "EQUINOCTIAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EQUINOCTIALMOD = new OrbitElementsType(env->getStaticObjectField(cls, "EQUINOCTIALMOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  GEODETIC = new OrbitElementsType(env->getStaticObjectField(cls, "GEODETIC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  KEPLERIAN = new OrbitElementsType(env->getStaticObjectField(cls, "KEPLERIAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  KEPLERIANMEAN = new OrbitElementsType(env->getStaticObjectField(cls, "KEPLERIANMEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  LDBARV = new OrbitElementsType(env->getStaticObjectField(cls, "LDBARV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  ONSTATION = new OrbitElementsType(env->getStaticObjectField(cls, "ONSTATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  POINCARE = new OrbitElementsType(env->getStaticObjectField(cls, "POINCARE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List OrbitElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_d751c1a57012b438]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates OrbitElementsType::toCartesian(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_8bc09b08ce3a501f], a0.this$, a1.this$, a2.this$, a3));
              }

              JArray< jdouble > OrbitElementsType::toRawElements(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toRawElements_3828301ea6163a12], a0.this$, a1.this$, a2.this$, a3));
              }

              ::java::lang::String OrbitElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
              }

              OrbitElementsType OrbitElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ed63d354babb827b], a0.this$));
              }

              JArray< OrbitElementsType > OrbitElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_216373f79d0e0223]));
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitElementsType_of_(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_getUnits(t_OrbitElementsType *self);
              static PyObject *t_OrbitElementsType_toCartesian(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_toRawElements(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_toString(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitElementsType_values(PyTypeObject *type);
              static PyObject *t_OrbitElementsType_get__units(t_OrbitElementsType *self, void *data);
              static PyObject *t_OrbitElementsType_get__parameters_(t_OrbitElementsType *self, void *data);
              static PyGetSetDef t_OrbitElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitElementsType, units),
                DECLARE_GET_FIELD(t_OrbitElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitElementsType__methods_[] = {
                DECLARE_METHOD(t_OrbitElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitElementsType, toCartesian, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, toRawElements, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitElementsType)[] = {
                { Py_tp_methods, t_OrbitElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitElementsType, t_OrbitElementsType, OrbitElementsType);
              PyObject *t_OrbitElementsType::wrap_Object(const OrbitElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitElementsType *self = (t_OrbitElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitElementsType *self = (t_OrbitElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitElementsType), &PY_TYPE_DEF(OrbitElementsType), module, "OrbitElementsType", 0);
              }

              void t_OrbitElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "class_", make_descriptor(OrbitElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "wrapfn_", make_descriptor(t_OrbitElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "ADBARV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::ADBARV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTP", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTPV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTPV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTPVA", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTPVA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "DELAUNAY", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::DELAUNAY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "DELAUNAYMOD", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::DELAUNAYMOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EIGVAL3EIGVEC3", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EIGVAL3EIGVEC3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EQUINOCTIAL", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EQUINOCTIAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EQUINOCTIALMOD", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EQUINOCTIALMOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "GEODETIC", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::GEODETIC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "KEPLERIAN", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::KEPLERIAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "KEPLERIANMEAN", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::KEPLERIANMEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "LDBARV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::LDBARV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "ONSTATION", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::ONSTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "POINCARE", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::POINCARE)));
              }

              static PyObject *t_OrbitElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitElementsType::initializeClass, 1)))
                  return NULL;
                return t_OrbitElementsType::wrap_Object(OrbitElementsType(((t_OrbitElementsType *) arg)->object.this$));
              }
              static PyObject *t_OrbitElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitElementsType_of_(t_OrbitElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitElementsType_getUnits(t_OrbitElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitElementsType_toCartesian(t_OrbitElementsType *self, PyObject *args)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

                if (!parseArgs(args, "k[DkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.toCartesian(a0, a1, a2, a3));
                  return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toCartesian", args);
                return NULL;
              }

              static PyObject *t_OrbitElementsType_toRawElements(t_OrbitElementsType *self, PyObject *args)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
                ::org::orekit::frames::Frame a1((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "kkkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.toRawElements(a0, a1, a2, a3));
                  return result.wrap();
                }

                PyErr_SetArgsError((PyObject *) self, "toRawElements", args);
                return NULL;
              }

              static PyObject *t_OrbitElementsType_toString(t_OrbitElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OrbitElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OrbitElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::valueOf(a0));
                  return t_OrbitElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitElementsType_values(PyTypeObject *type)
              {
                JArray< OrbitElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitElementsType::wrap_jobject);
              }
              static PyObject *t_OrbitElementsType_get__parameters_(t_OrbitElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OrbitElementsType_get__units(t_OrbitElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03Header::class$ = NULL;
              jmethodID *SsrIgm03Header::mids$ = NULL;
              bool SsrIgm03Header::live$ = false;

              jclass SsrIgm03Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_8fd427ab23829bf5] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Header::SsrIgm03Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint SsrIgm03Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_d6ab429752e7c267]);
              }

              void SsrIgm03Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_8fd427ab23829bf5], a0);
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self);
              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg);
              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data);
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm03Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm03Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03Header)[] = {
                { Py_tp_methods, t_SsrIgm03Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03Header_init_ },
                { Py_tp_getset, t_SsrIgm03Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm03Header, t_SsrIgm03Header, SsrIgm03Header);

              void t_SsrIgm03Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03Header), &PY_TYPE_DEF(SsrIgm03Header), module, "SsrIgm03Header", 0);
              }

              void t_SsrIgm03Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "class_", make_descriptor(SsrIgm03Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "wrapfn_", make_descriptor(t_SsrIgm03Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03Header::wrap_Object(SsrIgm03Header(((t_SsrIgm03Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm03Header object((jobject) NULL);

                INT_CALL(object = SsrIgm03Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setCrsIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCrsIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setCrsIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "crsIndicator", arg);
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
#include "org/orekit/attitudes/FieldInertia.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldInertia.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertia::class$ = NULL;
      jmethodID *FieldInertia::mids$ = NULL;
      bool FieldInertia::live$ = false;

      jclass FieldInertia::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertia");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getInertiaAxis1_7fbf812b0f49865b] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis2_7fbf812b0f49865b] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis3_7fbf812b0f49865b] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_momentum_df37e4d755ff0467] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_swap12_cc5a92dc31fbb095] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap13_cc5a92dc31fbb095] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap23_cc5a92dc31fbb095] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/FieldInertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_7fbf812b0f49865b]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_7fbf812b0f49865b]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_7fbf812b0f49865b]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_momentum_df37e4d755ff0467], a0.this$));
      }

      FieldInertia FieldInertia::swap12() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap12_cc5a92dc31fbb095]));
      }

      FieldInertia FieldInertia::swap13() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap13_cc5a92dc31fbb095]));
      }

      FieldInertia FieldInertia::swap23() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap23_cc5a92dc31fbb095]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args);
      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self);
      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg);
      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self);
      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data);
      static PyGetSetDef t_FieldInertia__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis1),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis2),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis3),
        DECLARE_GET_FIELD(t_FieldInertia, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertia__methods_[] = {
        DECLARE_METHOD(t_FieldInertia, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis1, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis2, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis3, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, momentum, METH_O),
        DECLARE_METHOD(t_FieldInertia, swap12, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap13, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap23, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertia)[] = {
        { Py_tp_methods, t_FieldInertia__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldInertia__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertia)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertia, t_FieldInertia, FieldInertia);
      PyObject *t_FieldInertia::wrap_Object(const FieldInertia& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertia::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertia::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertia), &PY_TYPE_DEF(FieldInertia), module, "FieldInertia", 0);
      }

      void t_FieldInertia::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "class_", make_descriptor(FieldInertia::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "wrapfn_", make_descriptor(t_FieldInertia::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertia::initializeClass, 1)))
          return NULL;
        return t_FieldInertia::wrap_Object(FieldInertia(((t_FieldInertia *) arg)->object.this$));
      }
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertia::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          OBJ_CALL(result = self->object.momentum(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "momentum", arg);
        return NULL;
      }

      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap12());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap13());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap23());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *TurnAroundRangeBuilder::class$ = NULL;
          jmethodID *TurnAroundRangeBuilder::mids$ = NULL;
          bool TurnAroundRangeBuilder::live$ = false;

          jclass TurnAroundRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10af0e412dc0df53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_1fe2e6beaaf42b24] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TurnAroundRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeBuilder::TurnAroundRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_10af0e412dc0df53, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TurnAroundRange TurnAroundRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TurnAroundRange(env->callObjectMethod(this$, mids$[mid_build_1fe2e6beaaf42b24], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_TurnAroundRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeBuilder_of_(t_TurnAroundRangeBuilder *self, PyObject *args);
          static int t_TurnAroundRangeBuilder_init_(t_TurnAroundRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeBuilder_build(t_TurnAroundRangeBuilder *self, PyObject *args);
          static PyObject *t_TurnAroundRangeBuilder_get__parameters_(t_TurnAroundRangeBuilder *self, void *data);
          static PyGetSetDef t_TurnAroundRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeBuilder)[] = {
            { Py_tp_methods, t_TurnAroundRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeBuilder_init_ },
            { Py_tp_getset, t_TurnAroundRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeBuilder, t_TurnAroundRangeBuilder, TurnAroundRangeBuilder);
          PyObject *t_TurnAroundRangeBuilder::wrap_Object(const TurnAroundRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TurnAroundRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TurnAroundRangeBuilder *self = (t_TurnAroundRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TurnAroundRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TurnAroundRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TurnAroundRangeBuilder *self = (t_TurnAroundRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TurnAroundRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeBuilder), &PY_TYPE_DEF(TurnAroundRangeBuilder), module, "TurnAroundRangeBuilder", 0);
          }

          void t_TurnAroundRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "class_", make_descriptor(TurnAroundRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "wrapfn_", make_descriptor(t_TurnAroundRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeBuilder::wrap_Object(TurnAroundRangeBuilder(((t_TurnAroundRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TurnAroundRangeBuilder_of_(t_TurnAroundRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_TurnAroundRangeBuilder_init_(t_TurnAroundRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            TurnAroundRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TurnAroundRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TurnAroundRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeBuilder_build(t_TurnAroundRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::TurnAroundRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_TurnAroundRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TurnAroundRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_TurnAroundRangeBuilder_get__parameters_(t_TurnAroundRangeBuilder *self, void *data)
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
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *FieldGeodeticPoint::class$ = NULL;
      jmethodID *FieldGeodeticPoint::mids$ = NULL;
      bool FieldGeodeticPoint::live$ = false;

      jclass FieldGeodeticPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/FieldGeodeticPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f9ea60a8dc2d69fb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_08d37e3f77b7239d] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEast_d1b42a6748e907f9] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getLatitude_08d37e3f77b7239d] = env->getMethodID(cls, "getLatitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLongitude_08d37e3f77b7239d] = env->getMethodID(cls, "getLongitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNadir_d1b42a6748e907f9] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNorth_d1b42a6748e907f9] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSouth_d1b42a6748e907f9] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getWest_d1b42a6748e907f9] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZenith_d1b42a6748e907f9] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldGeodeticPoint::FieldGeodeticPoint(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f9ea60a8dc2d69fb, a0.this$, a1.this$, a2.this$)) {}

      jboolean FieldGeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getAltitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_08d37e3f77b7239d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getEast_d1b42a6748e907f9]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLatitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLatitude_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLongitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLongitude_08d37e3f77b7239d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNadir_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNorth_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSouth_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getWest_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getZenith_d1b42a6748e907f9]));
      }

      jint FieldGeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      ::java::lang::String FieldGeodeticPoint::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args);
      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data);
      static PyGetSetDef t_FieldGeodeticPoint__fields_[] = {
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, altitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, east),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, latitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, longitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, nadir),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, north),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, south),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, west),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, zenith),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldGeodeticPoint__methods_[] = {
        DECLARE_METHOD(t_FieldGeodeticPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getEast, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLatitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLongitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getWest, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldGeodeticPoint)[] = {
        { Py_tp_methods, t_FieldGeodeticPoint__methods_ },
        { Py_tp_init, (void *) t_FieldGeodeticPoint_init_ },
        { Py_tp_getset, t_FieldGeodeticPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldGeodeticPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldGeodeticPoint, t_FieldGeodeticPoint, FieldGeodeticPoint);
      PyObject *t_FieldGeodeticPoint::wrap_Object(const FieldGeodeticPoint& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldGeodeticPoint::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldGeodeticPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldGeodeticPoint), &PY_TYPE_DEF(FieldGeodeticPoint), module, "FieldGeodeticPoint", 0);
      }

      void t_FieldGeodeticPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "class_", make_descriptor(FieldGeodeticPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "wrapfn_", make_descriptor(t_FieldGeodeticPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldGeodeticPoint::initializeClass, 1)))
          return NULL;
        return t_FieldGeodeticPoint::wrap_Object(FieldGeodeticPoint(((t_FieldGeodeticPoint *) arg)->object.this$));
      }
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldGeodeticPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldGeodeticPoint object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldGeodeticPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAltitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLongitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAltitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLongitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CommonMetadataWriter::class$ = NULL;
            jmethodID *CommonMetadataWriter::mids$ = NULL;
            bool CommonMetadataWriter::live$ = false;

            jclass CommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_48badb87f9ac689e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonMetadataWriter::CommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_48badb87f9ac689e, a0.this$, a1.this$)) {}
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
            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_CommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonMetadataWriter)[] = {
              { Py_tp_methods, t_CommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_CommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CommonMetadataWriter, t_CommonMetadataWriter, CommonMetadataWriter);

            void t_CommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonMetadataWriter), &PY_TYPE_DEF(CommonMetadataWriter), module, "CommonMetadataWriter", 0);
            }

            void t_CommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "class_", make_descriptor(CommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "wrapfn_", make_descriptor(t_CommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_CommonMetadataWriter::wrap_Object(CommonMetadataWriter(((t_CommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
              CommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CommonMetadataWriter(a0, a1));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonDSSTForceModel::class$ = NULL;
            jmethodID *PythonDSSTForceModel::mids$ = NULL;
            bool PythonDSSTForceModel::live$ = false;

            jclass PythonDSSTForceModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getMeanElementRate_3eb9526d5d611f82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_43ba9f5eaba95dbb] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_49390f5c28b648db] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_61d4f27408b30d56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonDSSTForceModel::PythonDSSTForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonDSSTForceModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonDSSTForceModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonDSSTForceModel::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
            static PyObject *t_PythonDSSTForceModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonDSSTForceModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonDSSTForceModel_init_(t_PythonDSSTForceModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonDSSTForceModel_finalize(t_PythonDSSTForceModel *self);
            static PyObject *t_PythonDSSTForceModel_pythonExtension(t_PythonDSSTForceModel *self, PyObject *args);
            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static void JNICALL t_PythonDSSTForceModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonDSSTForceModel_registerAttitudeProvider6(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static PyObject *t_PythonDSSTForceModel_get__self(t_PythonDSSTForceModel *self, void *data);
            static PyGetSetDef t_PythonDSSTForceModel__fields_[] = {
              DECLARE_GET_FIELD(t_PythonDSSTForceModel, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonDSSTForceModel__methods_[] = {
              DECLARE_METHOD(t_PythonDSSTForceModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonDSSTForceModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonDSSTForceModel, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonDSSTForceModel, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonDSSTForceModel)[] = {
              { Py_tp_methods, t_PythonDSSTForceModel__methods_ },
              { Py_tp_init, (void *) t_PythonDSSTForceModel_init_ },
              { Py_tp_getset, t_PythonDSSTForceModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonDSSTForceModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonDSSTForceModel, t_PythonDSSTForceModel, PythonDSSTForceModel);

            void t_PythonDSSTForceModel::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonDSSTForceModel), &PY_TYPE_DEF(PythonDSSTForceModel), module, "PythonDSSTForceModel", 1);
            }

            void t_PythonDSSTForceModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "class_", make_descriptor(PythonDSSTForceModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "wrapfn_", make_descriptor(t_PythonDSSTForceModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonDSSTForceModel::initializeClass);
              JNINativeMethod methods[] = {
                { "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D", (void *) t_PythonDSSTForceModel_getMeanElementRate0 },
                { "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDSSTForceModel_getMeanElementRate1 },
                { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDSSTForceModel_getParametersDrivers2 },
                { "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;", (void *) t_PythonDSSTForceModel_initializeShortPeriodTerms3 },
                { "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;", (void *) t_PythonDSSTForceModel_initializeShortPeriodTerms4 },
                { "pythonDecRef", "()V", (void *) t_PythonDSSTForceModel_pythonDecRef5 },
                { "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonDSSTForceModel_registerAttitudeProvider6 },
                { "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonDSSTForceModel_updateShortPeriodTerms7 },
                { "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonDSSTForceModel_updateShortPeriodTerms8 },
              };
              env->registerNatives(cls, methods, 9);
            }

            static PyObject *t_PythonDSSTForceModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonDSSTForceModel::initializeClass, 1)))
                return NULL;
              return t_PythonDSSTForceModel::wrap_Object(PythonDSSTForceModel(((t_PythonDSSTForceModel *) arg)->object.this$));
            }
            static PyObject *t_PythonDSSTForceModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonDSSTForceModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonDSSTForceModel_init_(t_PythonDSSTForceModel *self, PyObject *args, PyObject *kwds)
            {
              PythonDSSTForceModel object((jobject) NULL);

              INT_CALL(object = PythonDSSTForceModel());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonDSSTForceModel_finalize(t_PythonDSSTForceModel *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonDSSTForceModel_pythonExtension(t_PythonDSSTForceModel *self, PyObject *args)
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

            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a1));
              PyObject *o2 = JArray<jdouble>(a2).wrap();
              PyObject *result = PyObject_CallMethod(obj, "getMeanElementRate", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getMeanElementRate", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a1));
              PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "getMeanElementRate", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getMeanElementRate", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("getParametersDrivers", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a0));
              PyObject *o1 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a1));
              PyObject *o2 = JArray<jdouble>(a2).wrap();
              PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodTerms", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("initializeShortPeriodTerms", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a0));
              PyObject *o1 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a1));
              PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodTerms", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("initializeShortPeriodTerms", result);
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

            static void JNICALL t_PythonDSSTForceModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonDSSTForceModel_registerAttitudeProvider6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
              PyObject *result = PyObject_CallMethod(obj, "registerAttitudeProvider", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *o1 = JArray<jobject>(a1).wrap(::org::orekit::propagation::t_FieldSpacecraftState::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "updateShortPeriodTerms", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = JArray<jdouble>(a0).wrap();
              PyObject *o1 = JArray<jobject>(a1).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "updateShortPeriodTerms", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonDSSTForceModel_get__self(t_PythonDSSTForceModel *self, void *data)
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
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger$FieldLoggedEvent::class$ = NULL;
        jmethodID *FieldEventsLogger$FieldLoggedEvent::mids$ = NULL;
        bool FieldEventsLogger$FieldLoggedEvent::live$ = false;

        jclass FieldEventsLogger$FieldLoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetector_3146cd1129cf853c] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getState_a74be2e38786f3b6] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isIncreasing_eee3de00fe971136] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventsLogger$FieldLoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_3146cd1129cf853c]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventsLogger$FieldLoggedEvent::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_a74be2e38786f3b6]));
        }

        jboolean FieldEventsLogger$FieldLoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_eee3de00fe971136]);
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
      namespace events {
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyGetSetDef t_FieldEventsLogger$FieldLoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, increasing),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, state),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger$FieldLoggedEvent__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger$FieldLoggedEvent)[] = {
          { Py_tp_methods, t_FieldEventsLogger$FieldLoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventsLogger$FieldLoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger$FieldLoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger$FieldLoggedEvent, t_FieldEventsLogger$FieldLoggedEvent, FieldEventsLogger$FieldLoggedEvent);
        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(const FieldEventsLogger$FieldLoggedEvent& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger$FieldLoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger$FieldLoggedEvent), &PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent), module, "FieldEventsLogger$FieldLoggedEvent", 0);
        }

        void t_FieldEventsLogger$FieldLoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "class_", make_descriptor(FieldEventsLogger$FieldLoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "wrapfn_", make_descriptor(t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(FieldEventsLogger$FieldLoggedEvent(((t_FieldEventsLogger$FieldLoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Tan.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tan::class$ = NULL;
        jmethodID *Tan::mids$ = NULL;
        bool Tan::live$ = false;

        jclass Tan::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tan");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tan::Tan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Tan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tan_value(t_Tan *self, PyObject *args);

        static PyMethodDef t_Tan__methods_[] = {
          DECLARE_METHOD(t_Tan, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tan)[] = {
          { Py_tp_methods, t_Tan__methods_ },
          { Py_tp_init, (void *) t_Tan_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tan)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tan, t_Tan, Tan);

        void t_Tan::install(PyObject *module)
        {
          installType(&PY_TYPE(Tan), &PY_TYPE_DEF(Tan), module, "Tan", 0);
        }

        void t_Tan::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "class_", make_descriptor(Tan::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "wrapfn_", make_descriptor(t_Tan::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tan::initializeClass, 1)))
            return NULL;
          return t_Tan::wrap_Object(Tan(((t_Tan *) arg)->object.this$));
        }
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tan::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds)
        {
          Tan object((jobject) NULL);

          INT_CALL(object = Tan());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tan_value(t_Tan *self, PyObject *args)
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
#include "org/hipparchus/stat/inference/InferenceTestUtils.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *InferenceTestUtils::class$ = NULL;
        jmethodID *InferenceTestUtils::mids$ = NULL;
        bool InferenceTestUtils::live$ = false;

        jclass InferenceTestUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/InferenceTestUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_approximateP_e8c62577e6af9173] = env->getStaticMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_chiSquare_1a9d0eafbd140a5e] = env->getStaticMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_f8078c674056fb4a] = env->getStaticMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_8361d6bcedc1da1a] = env->getStaticMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_1a9d0eafbd140a5e] = env->getStaticMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_f8078c674056fb4a] = env->getStaticMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_61b6a9dae7ed2786] = env->getStaticMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_8ea380ac7c124df6] = env->getStaticMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_8361d6bcedc1da1a] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_0d632518d2300ac8] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_exactP_23ad5004a7d91208] = env->getStaticMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_g_f8078c674056fb4a] = env->getStaticMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_8361d6bcedc1da1a] = env->getStaticMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_f8078c674056fb4a] = env->getStaticMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_8ea380ac7c124df6] = env->getStaticMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_8361d6bcedc1da1a] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_0d632518d2300ac8] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_f8078c674056fb4a] = env->getStaticMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_homoscedasticT_b01af8a77d4df96f] = env->getStaticMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_f5214cbd47f47c82] = env->getStaticMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_b01af8a77d4df96f] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_f5214cbd47f47c82] = env->getStaticMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_9813d7ac14cb2486] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_kolmogorovSmirnovStatistic_b01af8a77d4df96f] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_163649aa371f5c4c] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_b01af8a77d4df96f] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_163649aa371f5c4c] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_2cf76703ce30b165] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_12a35b6f3eee20af] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_4b4eb130f807dbcc] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_oneWayAnovaFValue_ce4bc28a12afbddc] = env->getStaticMethodID(cls, "oneWayAnovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaPValue_ce4bc28a12afbddc] = env->getStaticMethodID(cls, "oneWayAnovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaTest_9bf4a3edb5ef37bf] = env->getStaticMethodID(cls, "oneWayAnovaTest", "(Ljava/util/Collection;D)Z");
            mids$[mid_pairedT_b01af8a77d4df96f] = env->getStaticMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_b01af8a77d4df96f] = env->getStaticMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_9813d7ac14cb2486] = env->getStaticMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_rootLogLikelihoodRatio_b846aea95df710a3] = env->getStaticMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");
            mids$[mid_t_b01af8a77d4df96f] = env->getStaticMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_4f42c7a8793320e4] = env->getStaticMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_903f0d6f6e0dac90] = env->getStaticMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_f5214cbd47f47c82] = env->getStaticMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_b01af8a77d4df96f] = env->getStaticMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_4f42c7a8793320e4] = env->getStaticMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_903f0d6f6e0dac90] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_f5214cbd47f47c82] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_9813d7ac14cb2486] = env->getStaticMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_b1cf28637d6920a8] = env->getStaticMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_fe55a42774f43357] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_d0fcfd116c4adb72] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble InferenceTestUtils::approximateP(jdouble a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_approximateP_e8c62577e6af9173], a0, a1, a2);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_1a9d0eafbd140a5e], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareDataSetsComparison_8361d6bcedc1da1a], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_1a9d0eafbd140a5e], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_61b6a9dae7ed2786], a0.this$, a1);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_8ea380ac7c124df6], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_8361d6bcedc1da1a], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_0d632518d2300ac8], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::exactP(jdouble a0, jint a1, jint a2, jboolean a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_exactP_23ad5004a7d91208], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::g(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_g_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gDataSetsComparison_8361d6bcedc1da1a], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTest_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTest_8ea380ac7c124df6], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestDataSetsComparison_8361d6bcedc1da1a], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTestDataSetsComparison_0d632518d2300ac8], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestIntrinsic_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_f5214cbd47f47c82], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_f5214cbd47f47c82], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_homoscedasticTTest_9813d7ac14cb2486], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_163649aa371f5c4c], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_163649aa371f5c4c], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_2cf76703ce30b165], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_12a35b6f3eee20af], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_kolmogorovSmirnovTest_4b4eb130f807dbcc], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::oneWayAnovaFValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaFValue_ce4bc28a12afbddc], a0.this$);
        }

        jdouble InferenceTestUtils::oneWayAnovaPValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaPValue_ce4bc28a12afbddc], a0.this$);
        }

        jboolean InferenceTestUtils::oneWayAnovaTest(const ::java::util::Collection & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_oneWayAnovaTest_9bf4a3edb5ef37bf], a0.this$, a1);
        }

        jdouble InferenceTestUtils::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedT_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedTTest_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_pairedTTest_9813d7ac14cb2486], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_rootLogLikelihoodRatio_b846aea95df710a3], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_4f42c7a8793320e4], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_903f0d6f6e0dac90], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_f5214cbd47f47c82], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_4f42c7a8793320e4], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_903f0d6f6e0dac90], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_f5214cbd47f47c82], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_9813d7ac14cb2486], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_b1cf28637d6920a8], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_fe55a42774f43357], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_d0fcfd116c4adb72], a0.this$, a1.this$, a2);
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
    namespace stat {
      namespace inference {
        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_InferenceTestUtils__methods_[] = {
          DECLARE_METHOD(t_InferenceTestUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, approximateP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquare, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, exactP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, g, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestIntrinsic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovStatistic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaFValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaPValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, rootLogLikelihoodRatio, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, t, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, tTest, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InferenceTestUtils)[] = {
          { Py_tp_methods, t_InferenceTestUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InferenceTestUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InferenceTestUtils, t_InferenceTestUtils, InferenceTestUtils);

        void t_InferenceTestUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(InferenceTestUtils), &PY_TYPE_DEF(InferenceTestUtils), module, "InferenceTestUtils", 0);
        }

        void t_InferenceTestUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "class_", make_descriptor(InferenceTestUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "wrapfn_", make_descriptor(t_InferenceTestUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InferenceTestUtils::initializeClass, 1)))
            return NULL;
          return t_InferenceTestUtils::wrap_Object(InferenceTestUtils(((t_InferenceTestUtils *) arg)->object.this$));
        }
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InferenceTestUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::approximateP(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "approximateP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jboolean a3;
          jdouble result;

          if (!parseArgs(args, "DIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::exactP(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "exactP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "g", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovStatistic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "k[DZ", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "k[DD", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaFValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaPValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaPValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "pairedT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "rootLogLikelihoodRatio", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "t", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "DkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "kkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "tTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmDataKey::class$ = NULL;
            jmethodID *TdmDataKey::mids$ = NULL;
            bool TdmDataKey::live$ = false;
            TdmDataKey *TdmDataKey::COMMENT = NULL;
            TdmDataKey *TdmDataKey::EPOCH = NULL;
            TdmDataKey *TdmDataKey::observation = NULL;

            jclass TdmDataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmDataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_166b7ea7d4bdabf0] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_valueOf_797d27a9cca79d9e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");
                mids$[mid_values_2990334373b59381] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new TdmDataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                EPOCH = new TdmDataKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                observation = new TdmDataKey(env->getStaticObjectField(cls, "observation", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmDataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_166b7ea7d4bdabf0], a0.this$, a1.this$, a2.this$);
            }

            TdmDataKey TdmDataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmDataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_797d27a9cca79d9e], a0.this$));
            }

            JArray< TdmDataKey > TdmDataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmDataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_2990334373b59381]));
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
          namespace tdm {
            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmDataKey_values(PyTypeObject *type);
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data);
            static PyGetSetDef t_TdmDataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmDataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmDataKey__methods_[] = {
              DECLARE_METHOD(t_TdmDataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmDataKey)[] = {
              { Py_tp_methods, t_TdmDataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmDataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmDataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmDataKey, t_TdmDataKey, TdmDataKey);
            PyObject *t_TdmDataKey::wrap_Object(const TdmDataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmDataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmDataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmDataKey), &PY_TYPE_DEF(TdmDataKey), module, "TdmDataKey", 0);
            }

            void t_TdmDataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "class_", make_descriptor(TdmDataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "wrapfn_", make_descriptor(t_TdmDataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmDataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "COMMENT", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "EPOCH", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "observation", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::observation)));
            }

            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmDataKey::initializeClass, 1)))
                return NULL;
              return t_TdmDataKey::wrap_Object(TdmDataKey(((t_TdmDataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmDataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmDataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::valueOf(a0));
                return t_TdmDataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmDataKey_values(PyTypeObject *type)
            {
              JArray< TdmDataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmDataKey::wrap_jobject);
            }
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroRangeModifier::class$ = NULL;
          jmethodID *ShapiroRangeModifier::mids$ = NULL;
          bool ShapiroRangeModifier::live$ = false;

          jclass ShapiroRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroRangeModifier::ShapiroRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          ::java::util::List ShapiroRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void ShapiroRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
        namespace modifiers {
          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self);
          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroRangeModifier, t_ShapiroRangeModifier, ShapiroRangeModifier);

          void t_ShapiroRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroRangeModifier), &PY_TYPE_DEF(ShapiroRangeModifier), module, "ShapiroRangeModifier", 0);
          }

          void t_ShapiroRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "class_", make_descriptor(ShapiroRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "wrapfn_", make_descriptor(t_ShapiroRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroRangeModifier::wrap_Object(ShapiroRangeModifier(((t_ShapiroRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FilterOutputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FilterOutputStream::class$ = NULL;
    jmethodID *FilterOutputStream::mids$ = NULL;
    bool FilterOutputStream::live$ = false;

    jclass FilterOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FilterOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_da52d6defb468793] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_bba2a19638de22ff] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_e4288ba5fbf20d28] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FilterOutputStream::FilterOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_da52d6defb468793, a0.this$)) {}

    void FilterOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void FilterOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_bba2a19638de22ff], a0.this$);
    }

    void FilterOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e4288ba5fbf20d28], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args);

    static PyMethodDef t_FilterOutputStream__methods_[] = {
      DECLARE_METHOD(t_FilterOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FilterOutputStream)[] = {
      { Py_tp_methods, t_FilterOutputStream__methods_ },
      { Py_tp_init, (void *) t_FilterOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FilterOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(FilterOutputStream, t_FilterOutputStream, FilterOutputStream);

    void t_FilterOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FilterOutputStream), &PY_TYPE_DEF(FilterOutputStream), module, "FilterOutputStream", 0);
    }

    void t_FilterOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "class_", make_descriptor(FilterOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "wrapfn_", make_descriptor(t_FilterOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FilterOutputStream::initializeClass, 1)))
        return NULL;
      return t_FilterOutputStream::wrap_Object(FilterOutputStream(((t_FilterOutputStream *) arg)->object.this$));
    }
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FilterOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      FilterOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = FilterOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockRangeModifier::mids$ = NULL;
          bool RelativisticClockRangeModifier::live$ = false;

          jclass RelativisticClockRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeModifier::RelativisticClockRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::java::util::List RelativisticClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
        namespace modifiers {
          static PyObject *t_RelativisticClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockRangeModifier_init_(t_RelativisticClockRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockRangeModifier_getParametersDrivers(t_RelativisticClockRangeModifier *self);
          static PyObject *t_RelativisticClockRangeModifier_modifyWithoutDerivatives(t_RelativisticClockRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockRangeModifier_get__parametersDrivers(t_RelativisticClockRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockRangeModifier, t_RelativisticClockRangeModifier, RelativisticClockRangeModifier);

          void t_RelativisticClockRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockRangeModifier), &PY_TYPE_DEF(RelativisticClockRangeModifier), module, "RelativisticClockRangeModifier", 0);
          }

          void t_RelativisticClockRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "class_", make_descriptor(RelativisticClockRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockRangeModifier::wrap_Object(RelativisticClockRangeModifier(((t_RelativisticClockRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockRangeModifier_init_(t_RelativisticClockRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockRangeModifier_getParametersDrivers(t_RelativisticClockRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockRangeModifier_modifyWithoutDerivatives(t_RelativisticClockRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticClockRangeModifier_get__parametersDrivers(t_RelativisticClockRangeModifier *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *TileAiming::class$ = NULL;
          jmethodID *TileAiming::mids$ = NULL;
          bool TileAiming::live$ = false;

          jclass TileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/TileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_alongTileDirection_73bb6a45361007eb] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_d751c1a57012b438] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TileAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_73bb6a45361007eb], a0.this$, a1.this$));
          }

          ::java::util::List TileAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_d751c1a57012b438]));
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
    namespace models {
      namespace earth {
        namespace tessellation {
          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args);
          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self);
          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data);
          static PyGetSetDef t_TileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_TileAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TileAiming__methods_[] = {
            DECLARE_METHOD(t_TileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_TileAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TileAiming)[] = {
            { Py_tp_methods, t_TileAiming__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TileAiming, t_TileAiming, TileAiming);

          void t_TileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(TileAiming), &PY_TYPE_DEF(TileAiming), module, "TileAiming", 0);
          }

          void t_TileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "class_", make_descriptor(TileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "wrapfn_", make_descriptor(t_TileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TileAiming::initializeClass, 1)))
              return NULL;
            return t_TileAiming::wrap_Object(TileAiming(((t_TileAiming *) arg)->object.this$));
          }
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics$StreamingStatisticsBuilder::class$ = NULL;
        jmethodID *StreamingStatistics$StreamingStatisticsBuilder::mids$ = NULL;
        bool StreamingStatistics$StreamingStatisticsBuilder::live$ = false;

        jclass StreamingStatistics$StreamingStatisticsBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_build_e8391c24b9a78230] = env->getMethodID(cls, "build", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_extrema_4ca83ac5db036547] = env->getMethodID(cls, "extrema", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_moments_4ca83ac5db036547] = env->getMethodID(cls, "moments", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_percentiles_b05e8ec52e89e10f] = env->getMethodID(cls, "percentiles", "(DLorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfLogs_4ca83ac5db036547] = env->getMethodID(cls, "sumOfLogs", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfSquares_4ca83ac5db036547] = env->getMethodID(cls, "sumOfSquares", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics$StreamingStatisticsBuilder::StreamingStatistics$StreamingStatisticsBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::stat::descriptive::StreamingStatistics StreamingStatistics$StreamingStatisticsBuilder::build() const
        {
          return ::org::hipparchus::stat::descriptive::StreamingStatistics(env->callObjectMethod(this$, mids$[mid_build_e8391c24b9a78230]));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::extrema(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_extrema_4ca83ac5db036547], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::moments(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_moments_4ca83ac5db036547], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::percentiles(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_percentiles_b05e8ec52e89e10f], a0, a1.this$));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfLogs(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfLogs_4ca83ac5db036547], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfSquares(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfSquares_4ca83ac5db036547], a0));
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
    namespace stat {
      namespace descriptive {
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);

        static PyMethodDef t_StreamingStatistics$StreamingStatisticsBuilder__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, extrema, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, moments, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, percentiles, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfLogs, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfSquares, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          { Py_tp_methods, t_StreamingStatistics$StreamingStatisticsBuilder__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics$StreamingStatisticsBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics$StreamingStatisticsBuilder, t_StreamingStatistics$StreamingStatisticsBuilder, StreamingStatistics$StreamingStatisticsBuilder);

        void t_StreamingStatistics$StreamingStatisticsBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), &PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder), module, "StreamingStatistics$StreamingStatisticsBuilder", 0);
        }

        void t_StreamingStatistics$StreamingStatisticsBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "class_", make_descriptor(StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "wrapfn_", make_descriptor(t_StreamingStatistics$StreamingStatisticsBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(StreamingStatistics$StreamingStatisticsBuilder(((t_StreamingStatistics$StreamingStatisticsBuilder *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds)
        {
          StreamingStatistics$StreamingStatisticsBuilder object((jobject) NULL);

          INT_CALL(object = StreamingStatistics$StreamingStatisticsBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.extrema(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "extrema", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.moments(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "moments", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.percentiles(a0, a1));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "percentiles", args);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfLogs(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfLogs", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfSquares(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfSquares", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/SobolSequenceGenerator.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SobolSequenceGenerator::class$ = NULL;
      jmethodID *SobolSequenceGenerator::mids$ = NULL;
      bool SobolSequenceGenerator::live$ = false;

      jclass SobolSequenceGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SobolSequenceGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_422fe248e9e08df0] = env->getMethodID(cls, "<init>", "(ILjava/io/InputStream;)V");
          mids$[mid_getNextIndex_d6ab429752e7c267] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_be783177b060994b] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_81add9fc9d78d5b9] = env->getMethodID(cls, "skipTo", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0, const ::java::io::InputStream & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_422fe248e9e08df0, a0, a1.this$)) {}

      jint SobolSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_d6ab429752e7c267]);
      }

      JArray< jdouble > SobolSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_be783177b060994b]));
      }

      JArray< jdouble > SobolSequenceGenerator::skipTo(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_skipTo_81add9fc9d78d5b9], a0));
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
      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data);
      static PyGetSetDef t_SobolSequenceGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_SobolSequenceGenerator, nextIndex),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SobolSequenceGenerator__methods_[] = {
        DECLARE_METHOD(t_SobolSequenceGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, getNextIndex, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, nextVector, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, skipTo, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SobolSequenceGenerator)[] = {
        { Py_tp_methods, t_SobolSequenceGenerator__methods_ },
        { Py_tp_init, (void *) t_SobolSequenceGenerator_init_ },
        { Py_tp_getset, t_SobolSequenceGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SobolSequenceGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SobolSequenceGenerator, t_SobolSequenceGenerator, SobolSequenceGenerator);

      void t_SobolSequenceGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SobolSequenceGenerator), &PY_TYPE_DEF(SobolSequenceGenerator), module, "SobolSequenceGenerator", 0);
      }

      void t_SobolSequenceGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "class_", make_descriptor(SobolSequenceGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "wrapfn_", make_descriptor(t_SobolSequenceGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SobolSequenceGenerator::initializeClass, 1)))
          return NULL;
        return t_SobolSequenceGenerator::wrap_Object(SobolSequenceGenerator(((t_SobolSequenceGenerator *) arg)->object.this$));
      }
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SobolSequenceGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = SobolSequenceGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::java::io::InputStream a1((jobject) NULL);
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SobolSequenceGenerator(a0, a1));
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

      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNextIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.skipTo(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "skipTo", arg);
        return NULL;
      }

      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNextIndex());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmRelativeMetadataKey::class$ = NULL;
            jmethodID *CdmRelativeMetadataKey::mids$ = NULL;
            bool CdmRelativeMetadataKey::live$ = false;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::APPROACH_ANGLE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PERCENTILE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::CONJUNCTION_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MISS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_SPEED = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_ENTRY_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_EXIT_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_TYPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_X = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Y = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Z = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::START_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::STOP_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::TCA = NULL;

            jclass CdmRelativeMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_c9ceb687ea9a32de] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)Z");
                mids$[mid_valueOf_935129c15613fccb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");
                mids$[mid_values_6b112b29deafd5f8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APPROACH_ANGLE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "APPROACH_ANGLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PC_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PC_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PERCENTILE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PERCENTILE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                CONJUNCTION_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "CONJUNCTION_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MAHALANOBIS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MAHALANOBIS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MISS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MISS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                NEXT_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_SPEED = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_SPEED", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_ENTRY_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_ENTRY_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_EXIT_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_EXIT_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_PC_THRESHOLD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_PC_THRESHOLD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_TYPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_FRAME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_RADIUS = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_RADIUS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_SHAPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_X = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_X", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Y = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Y", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Z = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Z", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_FRAGMENTATION_MODEL = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_FRAGMENTATION_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                START_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "START_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                STOP_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "STOP_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                TCA = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "TCA", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmRelativeMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_c9ceb687ea9a32de], a0.this$, a1.this$, a2.this$);
            }

            CdmRelativeMetadataKey CdmRelativeMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmRelativeMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_935129c15613fccb], a0.this$));
            }

            JArray< CdmRelativeMetadataKey > CdmRelativeMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmRelativeMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6b112b29deafd5f8]));
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
          namespace cdm {
            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data);
            static PyGetSetDef t_CdmRelativeMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmRelativeMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadataKey)[] = {
              { Py_tp_methods, t_CdmRelativeMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmRelativeMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadataKey, t_CdmRelativeMetadataKey, CdmRelativeMetadataKey);
            PyObject *t_CdmRelativeMetadataKey::wrap_Object(const CdmRelativeMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmRelativeMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmRelativeMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadataKey), &PY_TYPE_DEF(CdmRelativeMetadataKey), module, "CdmRelativeMetadataKey", 0);
            }

            void t_CdmRelativeMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "class_", make_descriptor(CdmRelativeMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "wrapfn_", make_descriptor(t_CdmRelativeMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmRelativeMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "APPROACH_ANGLE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::APPROACH_ANGLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PC_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PERCENTILE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PERCENTILE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "CONJUNCTION_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::CONJUNCTION_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MAHALANOBIS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MISS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MISS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "NEXT_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_SPEED", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_SPEED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_ENTRY_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_ENTRY_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_EXIT_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_EXIT_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_PC_THRESHOLD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_TYPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_FRAME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_RADIUS", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_SHAPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_X", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Y", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Z", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_FRAGMENTATION_MODEL", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "START_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::START_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "STOP_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::STOP_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "TCA", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::TCA)));
            }

            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadataKey::wrap_Object(CdmRelativeMetadataKey(((t_CdmRelativeMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmRelativeMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::valueOf(a0));
                return t_CdmRelativeMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmRelativeMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmRelativeMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data)
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
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        ::java::lang::Class *ProbabilityOfCollision::class$ = NULL;
        jmethodID *ProbabilityOfCollision::mids$ = NULL;
        bool ProbabilityOfCollision::live$ = false;

        jclass ProbabilityOfCollision::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/ssa/metrics/ProbabilityOfCollision");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1bad5b063c51df2e] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;)V");
            mids$[mid_init$_eb13367e509f91e6] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;Z)V");
            mids$[mid_init$_4bbf0b8faa63b7c7] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Z)V");
            mids$[mid_getLowerLimit_9981f74b2d109da6] = env->getMethodID(cls, "getLowerLimit", "()D");
            mids$[mid_getProbabilityOfCollisionMethodName_d2c8eb4129821f0e] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_9981f74b2d109da6] = env->getMethodID(cls, "getUpperLimit", "()D");
            mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_isMaxProbability_eee3de00fe971136] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1bad5b063c51df2e, a0, a1.this$)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb13367e509f91e6, a0, a1.this$, a2)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4bbf0b8faa63b7c7, a0, a1, a2, a3.this$, a4)) {}

        jdouble ProbabilityOfCollision::getLowerLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerLimit_9981f74b2d109da6]);
        }

        ::java::lang::String ProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_d2c8eb4129821f0e]));
        }

        jdouble ProbabilityOfCollision::getUpperLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperLimit_9981f74b2d109da6]);
        }

        jdouble ProbabilityOfCollision::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
        }

        jboolean ProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_eee3de00fe971136]);
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
    namespace ssa {
      namespace metrics {
        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data);
        static PyGetSetDef t_ProbabilityOfCollision__fields_[] = {
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, lowerLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, maxProbability),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, probabilityOfCollisionMethodName),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, upperLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProbabilityOfCollision__methods_[] = {
          DECLARE_METHOD(t_ProbabilityOfCollision, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getLowerLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getProbabilityOfCollisionMethodName, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getUpperLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getValue, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, isMaxProbability, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProbabilityOfCollision)[] = {
          { Py_tp_methods, t_ProbabilityOfCollision__methods_ },
          { Py_tp_init, (void *) t_ProbabilityOfCollision_init_ },
          { Py_tp_getset, t_ProbabilityOfCollision__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProbabilityOfCollision)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProbabilityOfCollision, t_ProbabilityOfCollision, ProbabilityOfCollision);

        void t_ProbabilityOfCollision::install(PyObject *module)
        {
          installType(&PY_TYPE(ProbabilityOfCollision), &PY_TYPE_DEF(ProbabilityOfCollision), module, "ProbabilityOfCollision", 0);
        }

        void t_ProbabilityOfCollision::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "class_", make_descriptor(ProbabilityOfCollision::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "wrapfn_", make_descriptor(t_ProbabilityOfCollision::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProbabilityOfCollision::initializeClass, 1)))
            return NULL;
          return t_ProbabilityOfCollision::wrap_Object(ProbabilityOfCollision(((t_ProbabilityOfCollision *) arg)->object.this$));
        }
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProbabilityOfCollision::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "Ds", &a0, &a1))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              jboolean a2;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DsZ", &a0, &a1, &a2))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::java::lang::String a3((jobject) NULL);
              jboolean a4;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DDDsZ", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2, a3, a4));
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

        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProbabilityOfCollisionMethodName());
          return j2p(result);
        }

        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isMaxProbability());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isMaxProbability());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProbabilityOfCollisionMethodName());
          return j2p(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/PythonTileUpdater.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *PythonTileUpdater::class$ = NULL;
        jmethodID *PythonTileUpdater::mids$ = NULL;
        bool PythonTileUpdater::live$ = false;

        jclass PythonTileUpdater::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/PythonTileUpdater");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_updateTile_9be60dc0a7c39204] = env->getMethodID(cls, "updateTile", "(DDLorg/orekit/rugged/raster/UpdatableTile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTileUpdater::PythonTileUpdater() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonTileUpdater::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonTileUpdater::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonTileUpdater::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
    namespace rugged {
      namespace raster {
        static PyObject *t_PythonTileUpdater_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTileUpdater_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonTileUpdater_init_(t_PythonTileUpdater *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTileUpdater_finalize(t_PythonTileUpdater *self);
        static PyObject *t_PythonTileUpdater_pythonExtension(t_PythonTileUpdater *self, PyObject *args);
        static void JNICALL t_PythonTileUpdater_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonTileUpdater_updateTile1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jobject a2);
        static PyObject *t_PythonTileUpdater_get__self(t_PythonTileUpdater *self, void *data);
        static PyGetSetDef t_PythonTileUpdater__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTileUpdater, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTileUpdater__methods_[] = {
          DECLARE_METHOD(t_PythonTileUpdater, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTileUpdater, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTileUpdater, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTileUpdater, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTileUpdater)[] = {
          { Py_tp_methods, t_PythonTileUpdater__methods_ },
          { Py_tp_init, (void *) t_PythonTileUpdater_init_ },
          { Py_tp_getset, t_PythonTileUpdater__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTileUpdater)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTileUpdater, t_PythonTileUpdater, PythonTileUpdater);

        void t_PythonTileUpdater::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTileUpdater), &PY_TYPE_DEF(PythonTileUpdater), module, "PythonTileUpdater", 1);
        }

        void t_PythonTileUpdater::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileUpdater), "class_", make_descriptor(PythonTileUpdater::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileUpdater), "wrapfn_", make_descriptor(t_PythonTileUpdater::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileUpdater), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTileUpdater::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonTileUpdater_pythonDecRef0 },
            { "updateTile", "(DDLorg/orekit/rugged/raster/UpdatableTile;)V", (void *) t_PythonTileUpdater_updateTile1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonTileUpdater_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTileUpdater::initializeClass, 1)))
            return NULL;
          return t_PythonTileUpdater::wrap_Object(PythonTileUpdater(((t_PythonTileUpdater *) arg)->object.this$));
        }
        static PyObject *t_PythonTileUpdater_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTileUpdater::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonTileUpdater_init_(t_PythonTileUpdater *self, PyObject *args, PyObject *kwds)
        {
          PythonTileUpdater object((jobject) NULL);

          INT_CALL(object = PythonTileUpdater());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTileUpdater_finalize(t_PythonTileUpdater *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTileUpdater_pythonExtension(t_PythonTileUpdater *self, PyObject *args)
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

        static void JNICALL t_PythonTileUpdater_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTileUpdater::mids$[PythonTileUpdater::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTileUpdater::mids$[PythonTileUpdater::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonTileUpdater_updateTile1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTileUpdater::mids$[PythonTileUpdater::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o2 = ::org::orekit::rugged::raster::t_UpdatableTile::wrap_Object(::org::orekit::rugged::raster::UpdatableTile(a2));
          PyObject *result = PyObject_CallMethod(obj, "updateTile", "ddO", (double) a0, (double) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonTileUpdater_get__self(t_PythonTileUpdater *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *AbstractConvexHullGenerator2D::class$ = NULL;
            jmethodID *AbstractConvexHullGenerator2D::mids$ = NULL;
            bool AbstractConvexHullGenerator2D::live$ = false;

            jclass AbstractConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_7454961d4f202a9b] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");
                mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
                mids$[mid_isIncludeCollinearPoints_eee3de00fe971136] = env->getMethodID(cls, "isIncludeCollinearPoints", "()Z");
                mids$[mid_findHullVertices_ca6e223ef3eef34f] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D AbstractConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_7454961d4f202a9b], a0.this$));
            }

            jdouble AbstractConvexHullGenerator2D::getTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
            }

            jboolean AbstractConvexHullGenerator2D::isIncludeCollinearPoints() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isIncludeCollinearPoints_eee3de00fe971136]);
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyGetSetDef t_AbstractConvexHullGenerator2D__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, includeCollinearPoints),
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, tolerance),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, generate, METH_O),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, getTolerance, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, isIncludeCollinearPoints, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_AbstractConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractConvexHullGenerator2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractConvexHullGenerator2D, t_AbstractConvexHullGenerator2D, AbstractConvexHullGenerator2D);

            void t_AbstractConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractConvexHullGenerator2D), &PY_TYPE_DEF(AbstractConvexHullGenerator2D), module, "AbstractConvexHullGenerator2D", 0);
            }

            void t_AbstractConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "class_", make_descriptor(AbstractConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "wrapfn_", make_descriptor(t_AbstractConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_AbstractConvexHullGenerator2D::wrap_Object(AbstractConvexHullGenerator2D(((t_AbstractConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generate", arg);
              return NULL;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTolerance());
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
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmConstituent::class$ = NULL;
          jmethodID *NdmConstituent::mids$ = NULL;
          bool NdmConstituent::live$ = false;

          jclass NdmConstituent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmConstituent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_635853a14837ea6f] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_66ee964ea58dd871] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_a5bdfcd14307795f] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_setHeader_54cf4586f87f6b7f] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ccsds/section/Header;)V");
              mids$[mid_setSegments_aa335fea495d60e0] = env->getMethodID(cls, "setSegments", "(Ljava/util/List;)V");
              mids$[mid_validate_ff7cb6c242604316] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions NdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_635853a14837ea6f]));
          }

          ::org::orekit::data::DataContext NdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_66ee964ea58dd871]));
          }

          ::org::orekit::files::ccsds::section::Header NdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_a5bdfcd14307795f]));
          }

          ::java::util::List NdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
          }

          void NdmConstituent::setHeader(const ::org::orekit::files::ccsds::section::Header & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHeader_54cf4586f87f6b7f], a0.this$);
          }

          void NdmConstituent::setSegments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSegments_aa335fea495d60e0], a0.this$);
          }

          void NdmConstituent::validate() const
          {
            env->callVoidMethod(this$, mids$[mid_validate_ff7cb6c242604316]);
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
          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args);
          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data);
          static PyGetSetDef t_NdmConstituent__fields_[] = {
            DECLARE_GET_FIELD(t_NdmConstituent, conventions),
            DECLARE_GET_FIELD(t_NdmConstituent, dataContext),
            DECLARE_GETSET_FIELD(t_NdmConstituent, header),
            DECLARE_GETSET_FIELD(t_NdmConstituent, segments),
            DECLARE_GET_FIELD(t_NdmConstituent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmConstituent__methods_[] = {
            DECLARE_METHOD(t_NdmConstituent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmConstituent, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getHeader, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, setHeader, METH_O),
            DECLARE_METHOD(t_NdmConstituent, setSegments, METH_O),
            DECLARE_METHOD(t_NdmConstituent, validate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmConstituent)[] = {
            { Py_tp_methods, t_NdmConstituent__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmConstituent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmConstituent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmConstituent, t_NdmConstituent, NdmConstituent);
          PyObject *t_NdmConstituent::wrap_Object(const NdmConstituent& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_NdmConstituent::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_NdmConstituent::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmConstituent), &PY_TYPE_DEF(NdmConstituent), module, "NdmConstituent", 0);
          }

          void t_NdmConstituent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "class_", make_descriptor(NdmConstituent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "wrapfn_", make_descriptor(t_NdmConstituent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmConstituent::initializeClass, 1)))
              return NULL;
            return t_NdmConstituent::wrap_Object(NdmConstituent(((t_NdmConstituent *) arg)->object.this$));
          }
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmConstituent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self)
          {
            ::org::orekit::files::ccsds::section::Header result((jobject) NULL);
            OBJ_CALL(result = self->object.getHeader());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
          }

          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Header a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setSegments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSegments", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self)
          {
            OBJ_CALL(self->object.validate());
            Py_RETURN_NONE;
          }
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
            OBJ_CALL(value = self->object.getHeader());
            return ::org::orekit::files::ccsds::section::t_Header::wrap_Object(value);
          }
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                INT_CALL(self->object.setHeader(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "header", arg);
            return -1;
          }

          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setSegments(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "segments", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *OptimizationData::class$ = NULL;
      jmethodID *OptimizationData::mids$ = NULL;
      bool OptimizationData::live$ = false;

      jclass OptimizationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/OptimizationData");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_OptimizationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationData_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_OptimizationData__methods_[] = {
        DECLARE_METHOD(t_OptimizationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationData, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OptimizationData)[] = {
        { Py_tp_methods, t_OptimizationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OptimizationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OptimizationData, t_OptimizationData, OptimizationData);

      void t_OptimizationData::install(PyObject *module)
      {
        installType(&PY_TYPE(OptimizationData), &PY_TYPE_DEF(OptimizationData), module, "OptimizationData", 0);
      }

      void t_OptimizationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "class_", make_descriptor(OptimizationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "wrapfn_", make_descriptor(t_OptimizationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OptimizationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OptimizationData::initializeClass, 1)))
          return NULL;
        return t_OptimizationData::wrap_Object(OptimizationData(((t_OptimizationData *) arg)->object.this$));
      }
      static PyObject *t_OptimizationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OptimizationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MeasurementCombination::class$ = NULL;
          jmethodID *MeasurementCombination::mids$ = NULL;
          bool MeasurementCombination::live$ = false;

          jclass MeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_34f94a0e1855db7e] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MeasurementCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_34f94a0e1855db7e], a0.this$));
          }

          ::java::lang::String MeasurementCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
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
        namespace gnss {
          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg);
          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self);
          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data);
          static PyGetSetDef t_MeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_MeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, combine, METH_O),
            DECLARE_METHOD(t_MeasurementCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementCombination)[] = {
            { Py_tp_methods, t_MeasurementCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementCombination, t_MeasurementCombination, MeasurementCombination);

          void t_MeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementCombination), &PY_TYPE_DEF(MeasurementCombination), module, "MeasurementCombination", 0);
          }

          void t_MeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "class_", make_descriptor(MeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "wrapfn_", make_descriptor(t_MeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_MeasurementCombination::wrap_Object(MeasurementCombination(((t_MeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combine(a0));
              return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combine", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/ILRSHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *ILRSHeader::class$ = NULL;
        jmethodID *ILRSHeader::mids$ = NULL;
        bool ILRSHeader::live$ = false;

        jclass ILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/ILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEndEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEndEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFormat_0090f7797e403f43] = env->getMethodID(cls, "getFormat", "()Ljava/lang/String;");
            mids$[mid_getIlrsSatelliteId_0090f7797e403f43] = env->getMethodID(cls, "getIlrsSatelliteId", "()Ljava/lang/String;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNoradId_0090f7797e403f43] = env->getMethodID(cls, "getNoradId", "()Ljava/lang/String;");
            mids$[mid_getProductionEpoch_d592c1a2c355eb35] = env->getMethodID(cls, "getProductionEpoch", "()Lorg/orekit/time/DateComponents;");
            mids$[mid_getProductionHour_f2f64475e4580546] = env->getMethodID(cls, "getProductionHour", "()I");
            mids$[mid_getSequenceNumber_f2f64475e4580546] = env->getMethodID(cls, "getSequenceNumber", "()I");
            mids$[mid_getSic_0090f7797e403f43] = env->getMethodID(cls, "getSic", "()Ljava/lang/String;");
            mids$[mid_getStartEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getStartEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getTargetClass_f2f64475e4580546] = env->getMethodID(cls, "getTargetClass", "()I");
            mids$[mid_getTargetLocation_f2f64475e4580546] = env->getMethodID(cls, "getTargetLocation", "()I");
            mids$[mid_getVersion_f2f64475e4580546] = env->getMethodID(cls, "getVersion", "()I");
            mids$[mid_setEndEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setEndEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setFormat_e939c6558ae8d313] = env->getMethodID(cls, "setFormat", "(Ljava/lang/String;)V");
            mids$[mid_setIlrsSatelliteId_e939c6558ae8d313] = env->getMethodID(cls, "setIlrsSatelliteId", "(Ljava/lang/String;)V");
            mids$[mid_setName_e939c6558ae8d313] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setNoradId_e939c6558ae8d313] = env->getMethodID(cls, "setNoradId", "(Ljava/lang/String;)V");
            mids$[mid_setProductionEpoch_cd567be04bee4d03] = env->getMethodID(cls, "setProductionEpoch", "(Lorg/orekit/time/DateComponents;)V");
            mids$[mid_setProductionHour_0a2a1ac2721c0336] = env->getMethodID(cls, "setProductionHour", "(I)V");
            mids$[mid_setSequenceNumber_0a2a1ac2721c0336] = env->getMethodID(cls, "setSequenceNumber", "(I)V");
            mids$[mid_setSic_e939c6558ae8d313] = env->getMethodID(cls, "setSic", "(Ljava/lang/String;)V");
            mids$[mid_setStartEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setStartEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setTargetClass_0a2a1ac2721c0336] = env->getMethodID(cls, "setTargetClass", "(I)V");
            mids$[mid_setTargetLocation_0a2a1ac2721c0336] = env->getMethodID(cls, "setTargetLocation", "(I)V");
            mids$[mid_setVersion_0a2a1ac2721c0336] = env->getMethodID(cls, "setVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ILRSHeader::ILRSHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::orekit::time::AbsoluteDate ILRSHeader::getEndEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndEpoch_aaa854c403487cf3]));
        }

        ::java::lang::String ILRSHeader::getFormat() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormat_0090f7797e403f43]));
        }

        ::java::lang::String ILRSHeader::getIlrsSatelliteId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIlrsSatelliteId_0090f7797e403f43]));
        }

        ::java::lang::String ILRSHeader::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        ::java::lang::String ILRSHeader::getNoradId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNoradId_0090f7797e403f43]));
        }

        ::org::orekit::time::DateComponents ILRSHeader::getProductionEpoch() const
        {
          return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getProductionEpoch_d592c1a2c355eb35]));
        }

        jint ILRSHeader::getProductionHour() const
        {
          return env->callIntMethod(this$, mids$[mid_getProductionHour_f2f64475e4580546]);
        }

        jint ILRSHeader::getSequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSequenceNumber_f2f64475e4580546]);
        }

        ::java::lang::String ILRSHeader::getSic() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSic_0090f7797e403f43]));
        }

        ::org::orekit::time::AbsoluteDate ILRSHeader::getStartEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartEpoch_aaa854c403487cf3]));
        }

        jint ILRSHeader::getTargetClass() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetClass_f2f64475e4580546]);
        }

        jint ILRSHeader::getTargetLocation() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetLocation_f2f64475e4580546]);
        }

        jint ILRSHeader::getVersion() const
        {
          return env->callIntMethod(this$, mids$[mid_getVersion_f2f64475e4580546]);
        }

        void ILRSHeader::setEndEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEndEpoch_e82d68cd9f886886], a0.this$);
        }

        void ILRSHeader::setFormat(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFormat_e939c6558ae8d313], a0.this$);
        }

        void ILRSHeader::setIlrsSatelliteId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIlrsSatelliteId_e939c6558ae8d313], a0.this$);
        }

        void ILRSHeader::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_e939c6558ae8d313], a0.this$);
        }

        void ILRSHeader::setNoradId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoradId_e939c6558ae8d313], a0.this$);
        }

        void ILRSHeader::setProductionEpoch(const ::org::orekit::time::DateComponents & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionEpoch_cd567be04bee4d03], a0.this$);
        }

        void ILRSHeader::setProductionHour(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionHour_0a2a1ac2721c0336], a0);
        }

        void ILRSHeader::setSequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSequenceNumber_0a2a1ac2721c0336], a0);
        }

        void ILRSHeader::setSic(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSic_e939c6558ae8d313], a0.this$);
        }

        void ILRSHeader::setStartEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStartEpoch_e82d68cd9f886886], a0.this$);
        }

        void ILRSHeader::setTargetClass(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetClass_0a2a1ac2721c0336], a0);
        }

        void ILRSHeader::setTargetLocation(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetLocation_0a2a1ac2721c0336], a0);
        }

        void ILRSHeader::setVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_0a2a1ac2721c0336], a0);
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
      namespace ilrs {
        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_ILRSHeader__fields_[] = {
          DECLARE_GETSET_FIELD(t_ILRSHeader, endEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, format),
          DECLARE_GETSET_FIELD(t_ILRSHeader, ilrsSatelliteId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, name),
          DECLARE_GETSET_FIELD(t_ILRSHeader, noradId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionHour),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sequenceNumber),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sic),
          DECLARE_GETSET_FIELD(t_ILRSHeader, startEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetClass),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetLocation),
          DECLARE_GETSET_FIELD(t_ILRSHeader, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ILRSHeader__methods_[] = {
          DECLARE_METHOD(t_ILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, getEndEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getFormat, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getIlrsSatelliteId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getName, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getNoradId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionHour, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSequenceNumber, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSic, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getStartEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetClass, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetLocation, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, setEndEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setFormat, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setIlrsSatelliteId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setName, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setNoradId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionHour, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSequenceNumber, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSic, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setStartEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetClass, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetLocation, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ILRSHeader)[] = {
          { Py_tp_methods, t_ILRSHeader__methods_ },
          { Py_tp_init, (void *) t_ILRSHeader_init_ },
          { Py_tp_getset, t_ILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ILRSHeader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ILRSHeader, t_ILRSHeader, ILRSHeader);

        void t_ILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(ILRSHeader), &PY_TYPE_DEF(ILRSHeader), module, "ILRSHeader", 0);
        }

        void t_ILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "class_", make_descriptor(ILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "wrapfn_", make_descriptor(t_ILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ILRSHeader::initializeClass, 1)))
            return NULL;
          return t_ILRSHeader::wrap_Object(ILRSHeader(((t_ILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          ILRSHeader object((jobject) NULL);

          INT_CALL(object = ILRSHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getFormat());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIlrsSatelliteId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getNoradId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::DateComponents result((jobject) NULL);
          OBJ_CALL(result = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getProductionHour());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSequenceNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSic());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetClass());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetLocation());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getVersion());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEndEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEndEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setFormat(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFormat", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setIlrsSatelliteId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIlrsSatelliteId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setName", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setNoradId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoradId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::DateComponents a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setProductionEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setProductionHour(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionHour", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSequenceNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSequenceNumber", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSic(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSic", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setStartEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStartEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetClass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetClass", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetLocation(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetLocation", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEndEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "endEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getFormat());
          return j2p(value);
        }
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setFormat(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "format", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIlrsSatelliteId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setIlrsSatelliteId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ilrsSatelliteId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "name", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getNoradId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setNoradId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noradId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::DateComponents value((jobject) NULL);
          OBJ_CALL(value = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(value);
        }
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::DateComponents value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &value))
            {
              INT_CALL(self->object.setProductionEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getProductionHour());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setProductionHour(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionHour", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSequenceNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSequenceNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sequenceNumber", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSic());
          return j2p(value);
        }
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSic(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sic", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setStartEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "startEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetClass());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetClass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetClass", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetLocation());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetLocation(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetLocation", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getVersion());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "version", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/GridAxis.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *GridAxis::class$ = NULL;
        jmethodID *GridAxis::mids$ = NULL;
        bool GridAxis::live$ = false;

        jclass GridAxis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/GridAxis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_204d8fef8522b316] = env->getMethodID(cls, "<init>", "([DI)V");
            mids$[mid_getN_f2f64475e4580546] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_interpolationIndex_12ebab281ee35c98] = env->getMethodID(cls, "interpolationIndex", "(D)I");
            mids$[mid_node_b772323fc98b7293] = env->getMethodID(cls, "node", "(I)D");
            mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GridAxis::GridAxis(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_204d8fef8522b316, a0.this$, a1)) {}

        jint GridAxis::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_f2f64475e4580546]);
        }

        jint GridAxis::interpolationIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_interpolationIndex_12ebab281ee35c98], a0);
        }

        jdouble GridAxis::node(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_node_b772323fc98b7293], a0);
        }

        jint GridAxis::size() const
        {
          return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
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
      namespace interpolation {
        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GridAxis_getN(t_GridAxis *self);
        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_size(t_GridAxis *self);
        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data);
        static PyGetSetDef t_GridAxis__fields_[] = {
          DECLARE_GET_FIELD(t_GridAxis, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GridAxis__methods_[] = {
          DECLARE_METHOD(t_GridAxis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, getN, METH_NOARGS),
          DECLARE_METHOD(t_GridAxis, interpolationIndex, METH_O),
          DECLARE_METHOD(t_GridAxis, node, METH_O),
          DECLARE_METHOD(t_GridAxis, size, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GridAxis)[] = {
          { Py_tp_methods, t_GridAxis__methods_ },
          { Py_tp_init, (void *) t_GridAxis_init_ },
          { Py_tp_getset, t_GridAxis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GridAxis)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GridAxis, t_GridAxis, GridAxis);

        void t_GridAxis::install(PyObject *module)
        {
          installType(&PY_TYPE(GridAxis), &PY_TYPE_DEF(GridAxis), module, "GridAxis", 0);
        }

        void t_GridAxis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "class_", make_descriptor(GridAxis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "wrapfn_", make_descriptor(t_GridAxis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GridAxis::initializeClass, 1)))
            return NULL;
          return t_GridAxis::wrap_Object(GridAxis(((t_GridAxis *) arg)->object.this$));
        }
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GridAxis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          GridAxis object((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            INT_CALL(object = GridAxis(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GridAxis_getN(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.interpolationIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolationIndex", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.node(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "node", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_size(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.size());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseRealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseRealVector::class$ = NULL;
      jmethodID *SparseRealVector::mids$ = NULL;
      bool SparseRealVector::live$ = false;

      jclass SparseRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseRealVector::SparseRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_SparseRealVector__methods_[] = {
        DECLARE_METHOD(t_SparseRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseRealVector, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseRealVector)[] = {
        { Py_tp_methods, t_SparseRealVector__methods_ },
        { Py_tp_init, (void *) t_SparseRealVector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealVector),
        NULL
      };

      DEFINE_TYPE(SparseRealVector, t_SparseRealVector, SparseRealVector);

      void t_SparseRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseRealVector), &PY_TYPE_DEF(SparseRealVector), module, "SparseRealVector", 0);
      }

      void t_SparseRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "class_", make_descriptor(SparseRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "wrapfn_", make_descriptor(t_SparseRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseRealVector::initializeClass, 1)))
          return NULL;
        return t_SparseRealVector::wrap_Object(SparseRealVector(((t_SparseRealVector *) arg)->object.this$));
      }
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds)
      {
        SparseRealVector object((jobject) NULL);

        INT_CALL(object = SparseRealVector());
        self->object = object;

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/String.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AngularDerivativesFilter::class$ = NULL;
      jmethodID *AngularDerivativesFilter::mids$ = NULL;
      bool AngularDerivativesFilter::live$ = false;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_R = NULL;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_RR = NULL;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_RRA = NULL;

      jclass AngularDerivativesFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AngularDerivativesFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFilter_6b4b72dbe46ae1d2] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_getMaxOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_6e06abfdcdffc262] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_values_7bb60d04961b1572] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/AngularDerivativesFilter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          USE_R = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_R", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          USE_RR = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_RR", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          USE_RRA = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_RRA", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AngularDerivativesFilter AngularDerivativesFilter::getFilter(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_6b4b72dbe46ae1d2], a0));
      }

      jint AngularDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_f2f64475e4580546]);
      }

      AngularDerivativesFilter AngularDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6e06abfdcdffc262], a0.this$));
      }

      JArray< AngularDerivativesFilter > AngularDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< AngularDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_7bb60d04961b1572]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AngularDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_of_(t_AngularDerivativesFilter *self, PyObject *args);
      static PyObject *t_AngularDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_getMaxOrder(t_AngularDerivativesFilter *self);
      static PyObject *t_AngularDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_AngularDerivativesFilter_values(PyTypeObject *type);
      static PyObject *t_AngularDerivativesFilter_get__maxOrder(t_AngularDerivativesFilter *self, void *data);
      static PyObject *t_AngularDerivativesFilter_get__parameters_(t_AngularDerivativesFilter *self, void *data);
      static PyGetSetDef t_AngularDerivativesFilter__fields_[] = {
        DECLARE_GET_FIELD(t_AngularDerivativesFilter, maxOrder),
        DECLARE_GET_FIELD(t_AngularDerivativesFilter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AngularDerivativesFilter__methods_[] = {
        DECLARE_METHOD(t_AngularDerivativesFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, of_, METH_VARARGS),
        DECLARE_METHOD(t_AngularDerivativesFilter, getFilter, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, getMaxOrder, METH_NOARGS),
        DECLARE_METHOD(t_AngularDerivativesFilter, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AngularDerivativesFilter)[] = {
        { Py_tp_methods, t_AngularDerivativesFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AngularDerivativesFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AngularDerivativesFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(AngularDerivativesFilter, t_AngularDerivativesFilter, AngularDerivativesFilter);
      PyObject *t_AngularDerivativesFilter::wrap_Object(const AngularDerivativesFilter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AngularDerivativesFilter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AngularDerivativesFilter *self = (t_AngularDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AngularDerivativesFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AngularDerivativesFilter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AngularDerivativesFilter *self = (t_AngularDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AngularDerivativesFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(AngularDerivativesFilter), &PY_TYPE_DEF(AngularDerivativesFilter), module, "AngularDerivativesFilter", 0);
      }

      void t_AngularDerivativesFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "class_", make_descriptor(AngularDerivativesFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "wrapfn_", make_descriptor(t_AngularDerivativesFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "boxfn_", make_descriptor(boxObject));
        env->getClass(AngularDerivativesFilter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_R", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_R)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_RR", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_RR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_RRA", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_RRA)));
      }

      static PyObject *t_AngularDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AngularDerivativesFilter::initializeClass, 1)))
          return NULL;
        return t_AngularDerivativesFilter::wrap_Object(AngularDerivativesFilter(((t_AngularDerivativesFilter *) arg)->object.this$));
      }
      static PyObject *t_AngularDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AngularDerivativesFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AngularDerivativesFilter_of_(t_AngularDerivativesFilter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AngularDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        AngularDerivativesFilter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::getFilter(a0));
          return t_AngularDerivativesFilter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFilter", arg);
        return NULL;
      }

      static PyObject *t_AngularDerivativesFilter_getMaxOrder(t_AngularDerivativesFilter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxOrder());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AngularDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        AngularDerivativesFilter result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::valueOf(a0));
          return t_AngularDerivativesFilter::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_AngularDerivativesFilter_values(PyTypeObject *type)
      {
        JArray< AngularDerivativesFilter > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::values());
        return JArray<jobject>(result.this$).wrap(t_AngularDerivativesFilter::wrap_jobject);
      }
      static PyObject *t_AngularDerivativesFilter_get__parameters_(t_AngularDerivativesFilter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AngularDerivativesFilter_get__maxOrder(t_AngularDerivativesFilter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxOrder());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Section::class$ = NULL;
          jmethodID *Section::mids$ = NULL;
          bool Section::live$ = false;

          jclass Section::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Section");

              mids$ = new jmethodID[max_mid];
              mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Section::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
        namespace section {
          static PyObject *t_Section_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Section_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Section_validate(t_Section *self, PyObject *arg);

          static PyMethodDef t_Section__methods_[] = {
            DECLARE_METHOD(t_Section, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Section, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Section, validate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Section)[] = {
            { Py_tp_methods, t_Section__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Section)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Section, t_Section, Section);

          void t_Section::install(PyObject *module)
          {
            installType(&PY_TYPE(Section), &PY_TYPE_DEF(Section), module, "Section", 0);
          }

          void t_Section::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "class_", make_descriptor(Section::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "wrapfn_", make_descriptor(t_Section::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Section_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Section::initializeClass, 1)))
              return NULL;
            return t_Section::wrap_Object(Section(((t_Section *) arg)->object.this$));
          }
          static PyObject *t_Section_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Section::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Section_validate(t_Section *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "validate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/HarrisPriester.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *HarrisPriester::class$ = NULL;
          jmethodID *HarrisPriester::mids$ = NULL;
          bool HarrisPriester::live$ = false;

          jclass HarrisPriester::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/HarrisPriester");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0a5b2718e0997f3a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
              mids$[mid_init$_510722e30ff1bdf0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[D)V");
              mids$[mid_init$_f206e82e75dbd58d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_init$_fbb4ef6954d0be48] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[DD)V");
              mids$[mid_getDensity_7e4981d8fe7bfeef] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_5fd980386f9c0459] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDensity_e3f5c4474b151066] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_ee5ac6667b0d4b90] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMaxAlt_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxAlt", "()D");
              mids$[mid_getMinAlt_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinAlt", "()D");
              mids$[mid_getTabDensity_43de1192439efa92] = env->getMethodID(cls, "getTabDensity", "()[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a5b2718e0997f3a, a0.this$, a1.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_510722e30ff1bdf0, a0.this$, a1.this$, a2.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f206e82e75dbd58d, a0.this$, a1.this$, a2)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fbb4ef6954d0be48, a0.this$, a1.this$, a2.this$, a3)) {}

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_7e4981d8fe7bfeef], a0.this$, a1.this$));
          }

          jdouble HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_5fd980386f9c0459], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e3f5c4474b151066], a0.this$, a1.this$, a2.this$));
          }

          jdouble HarrisPriester::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_ee5ac6667b0d4b90], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame HarrisPriester::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
          }

          jdouble HarrisPriester::getMaxAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxAlt_456d9a2f64d6b28d]);
          }

          jdouble HarrisPriester::getMinAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinAlt_456d9a2f64d6b28d]);
          }

          JArray< JArray< jdouble > > HarrisPriester::getTabDensity() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getTabDensity_43de1192439efa92]));
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
        namespace atmosphere {
          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args);
          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data);
          static PyGetSetDef t_HarrisPriester__fields_[] = {
            DECLARE_GET_FIELD(t_HarrisPriester, frame),
            DECLARE_GET_FIELD(t_HarrisPriester, maxAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, minAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, tabDensity),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HarrisPriester__methods_[] = {
            DECLARE_METHOD(t_HarrisPriester, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_HarrisPriester, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMaxAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMinAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getTabDensity, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HarrisPriester)[] = {
            { Py_tp_methods, t_HarrisPriester__methods_ },
            { Py_tp_init, (void *) t_HarrisPriester_init_ },
            { Py_tp_getset, t_HarrisPriester__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HarrisPriester)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HarrisPriester, t_HarrisPriester, HarrisPriester);

          void t_HarrisPriester::install(PyObject *module)
          {
            installType(&PY_TYPE(HarrisPriester), &PY_TYPE_DEF(HarrisPriester), module, "HarrisPriester", 0);
          }

          void t_HarrisPriester::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "class_", make_descriptor(HarrisPriester::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "wrapfn_", make_descriptor(t_HarrisPriester::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HarrisPriester::initializeClass, 1)))
              return NULL;
            return t_HarrisPriester::wrap_Object(HarrisPriester(((t_HarrisPriester *) arg)->object.this$));
          }
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HarrisPriester::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = HarrisPriester(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[D", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                jdouble a2;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                jdouble a3;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[DD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2, a3));
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

          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTabDensity());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTabDensity());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/PolynomialRotation.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *PolynomialRotation::class$ = NULL;
        jmethodID *PolynomialRotation::mids$ = NULL;
        bool PolynomialRotation::live$ = false;

        jclass PolynomialRotation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/PolynomialRotation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f3ddfbc8d7d5f3f3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_init$_d0946bec099eed6a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getParametersDrivers_a68a17dd093f796d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_074444dab4c2f526] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_c7e6a6851bf74340] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3ddfbc8d7d5f3f3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0946bec099eed6a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::stream::Stream PolynomialRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a68a17dd093f796d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_074444dab4c2f526], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_c7e6a6851bf74340], a0, a1.this$, a2.this$, a3.this$));
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
      namespace los {
        static PyObject *t_PolynomialRotation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialRotation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialRotation_init_(t_PolynomialRotation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialRotation_getParametersDrivers(t_PolynomialRotation *self);
        static PyObject *t_PolynomialRotation_transformLOS(t_PolynomialRotation *self, PyObject *args);
        static PyObject *t_PolynomialRotation_get__parametersDrivers(t_PolynomialRotation *self, void *data);
        static PyGetSetDef t_PolynomialRotation__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialRotation, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialRotation__methods_[] = {
          DECLARE_METHOD(t_PolynomialRotation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialRotation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialRotation, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialRotation, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialRotation)[] = {
          { Py_tp_methods, t_PolynomialRotation__methods_ },
          { Py_tp_init, (void *) t_PolynomialRotation_init_ },
          { Py_tp_getset, t_PolynomialRotation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialRotation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialRotation, t_PolynomialRotation, PolynomialRotation);

        void t_PolynomialRotation::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialRotation), &PY_TYPE_DEF(PolynomialRotation), module, "PolynomialRotation", 0);
        }

        void t_PolynomialRotation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "class_", make_descriptor(PolynomialRotation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "wrapfn_", make_descriptor(t_PolynomialRotation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialRotation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialRotation::initializeClass, 1)))
            return NULL;
          return t_PolynomialRotation::wrap_Object(PolynomialRotation(((t_PolynomialRotation *) arg)->object.this$));
        }
        static PyObject *t_PolynomialRotation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialRotation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialRotation_init_(t_PolynomialRotation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              PolynomialRotation object((jobject) NULL);

              if (!parseArgs(args, "skk[D", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PolynomialRotation(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialFunction a3((jobject) NULL);
              PolynomialRotation object((jobject) NULL);

              if (!parseArgs(args, "skkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PolynomialRotation(a0, a1, a2, a3));
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

        static PyObject *t_PolynomialRotation_getParametersDrivers(t_PolynomialRotation *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_PolynomialRotation_transformLOS(t_PolynomialRotation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ikk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::rugged::utils::DerivativeGenerator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_PolynomialRotation_get__parametersDrivers(t_PolynomialRotation *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *CovarianceMatrixProvider::class$ = NULL;
        jmethodID *CovarianceMatrixProvider::mids$ = NULL;
        bool CovarianceMatrixProvider::live$ = false;

        jclass CovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/CovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_63aee3ce1e412e46] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_dc7483997a2e9c4d] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_63aee3ce1e412e46], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_dc7483997a2e9c4d], a0.this$, a1.this$));
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
      namespace sequential {
        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args);

        static PyMethodDef t_CovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_CovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_CovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CovarianceMatrixProvider, t_CovarianceMatrixProvider, CovarianceMatrixProvider);

        void t_CovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(CovarianceMatrixProvider), &PY_TYPE_DEF(CovarianceMatrixProvider), module, "CovarianceMatrixProvider", 0);
        }

        void t_CovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "class_", make_descriptor(CovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "wrapfn_", make_descriptor(t_CovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_CovarianceMatrixProvider::wrap_Object(CovarianceMatrixProvider(((t_CovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInitialCovarianceMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInitialCovarianceMatrix", arg);
          return NULL;
        }

        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getProcessNoiseMatrix", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/SplineInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *SplineInterpolator::class$ = NULL;
        jmethodID *SplineInterpolator::mids$ = NULL;
        bool SplineInterpolator::live$ = false;

        jclass SplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/SplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_d587810b458fa2cb] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_c976cd8dd927abec] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SplineInterpolator::SplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction SplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d587810b458fa2cb], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction SplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_c976cd8dd927abec], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args);

        static PyMethodDef t_SplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_SplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SplineInterpolator)[] = {
          { Py_tp_methods, t_SplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_SplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SplineInterpolator, t_SplineInterpolator, SplineInterpolator);

        void t_SplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SplineInterpolator), &PY_TYPE_DEF(SplineInterpolator), module, "SplineInterpolator", 0);
        }

        void t_SplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "class_", make_descriptor(SplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "wrapfn_", make_descriptor(t_SplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_SplineInterpolator::wrap_Object(SplineInterpolator(((t_SplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          SplineInterpolator object((jobject) NULL);

          INT_CALL(object = SplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservableSatellite::class$ = NULL;
        jmethodID *ObservableSatellite::mids$ = NULL;
        bool ObservableSatellite::live$ = false;
        ::java::lang::String *ObservableSatellite::CLOCK_DRIFT_PREFIX = NULL;
        ::java::lang::String *ObservableSatellite::CLOCK_OFFSET_PREFIX = NULL;

        jclass ObservableSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservableSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getClockDriftDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPropagatorIndex_f2f64475e4580546] = env->getMethodID(cls, "getPropagatorIndex", "()I");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_DRIFT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_DRIFT_PREFIX", "Ljava/lang/String;"));
            CLOCK_OFFSET_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_OFFSET_PREFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ObservableSatellite::ObservableSatellite(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

        jboolean ObservableSatellite::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_ac0e5f8f2fa86f4f]));
        }

        jint ObservableSatellite::getPropagatorIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getPropagatorIndex_f2f64475e4580546]);
        }

        jint ObservableSatellite::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data);
        static PyGetSetDef t_ObservableSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_ObservableSatellite, clockDriftDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, clockOffsetDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, propagatorIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservableSatellite__methods_[] = {
          DECLARE_METHOD(t_ObservableSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, equals, METH_VARARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getPropagatorIndex, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservableSatellite)[] = {
          { Py_tp_methods, t_ObservableSatellite__methods_ },
          { Py_tp_init, (void *) t_ObservableSatellite_init_ },
          { Py_tp_getset, t_ObservableSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservableSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ObservableSatellite, t_ObservableSatellite, ObservableSatellite);

        void t_ObservableSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservableSatellite), &PY_TYPE_DEF(ObservableSatellite), module, "ObservableSatellite", 0);
        }

        void t_ObservableSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "class_", make_descriptor(ObservableSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "wrapfn_", make_descriptor(t_ObservableSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "boxfn_", make_descriptor(boxObject));
          env->getClass(ObservableSatellite::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_DRIFT_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_DRIFT_PREFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_OFFSET_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_OFFSET_PREFIX)));
        }

        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservableSatellite::initializeClass, 1)))
            return NULL;
          return t_ObservableSatellite::wrap_Object(ObservableSatellite(((t_ObservableSatellite *) arg)->object.this$));
        }
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservableSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          ObservableSatellite object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ObservableSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmElements::class$ = NULL;
              jmethodID *OcmElements::mids$ = NULL;
              bool OcmElements::live$ = false;
              OcmElements *OcmElements::COV = NULL;
              OcmElements *OcmElements::MAN = NULL;
              OcmElements *OcmElements::OD = NULL;
              OcmElements *OcmElements::ORB = NULL;
              OcmElements *OcmElements::PERT = NULL;
              OcmElements *OcmElements::PHYS = NULL;
              OcmElements *OcmElements::USER = NULL;

              jclass OcmElements::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmElements");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_623ab5e571bda668] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");
                  mids$[mid_values_c6f5daeb84b16e61] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmElements(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  MAN = new OcmElements(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  OD = new OcmElements(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  ORB = new OcmElements(env->getStaticObjectField(cls, "ORB", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PERT = new OcmElements(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PHYS = new OcmElements(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  USER = new OcmElements(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmElements OcmElements::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_623ab5e571bda668], a0.this$));
              }

              JArray< OcmElements > OcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_c6f5daeb84b16e61]));
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
              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args);
              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmElements_values(PyTypeObject *type);
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data);
              static PyGetSetDef t_OcmElements__fields_[] = {
                DECLARE_GET_FIELD(t_OcmElements, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmElements__methods_[] = {
                DECLARE_METHOD(t_OcmElements, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmElements, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmElements)[] = {
                { Py_tp_methods, t_OcmElements__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmElements__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmElements)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmElements, t_OcmElements, OcmElements);
              PyObject *t_OcmElements::wrap_Object(const OcmElements& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmElements::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmElements), &PY_TYPE_DEF(OcmElements), module, "OcmElements", 0);
              }

              void t_OcmElements::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "class_", make_descriptor(OcmElements::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "wrapfn_", make_descriptor(t_OcmElements::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmElements::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "COV", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "MAN", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "OD", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "ORB", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::ORB)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PERT", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PHYS", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "USER", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::USER)));
              }

              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmElements::initializeClass, 1)))
                  return NULL;
                return t_OcmElements::wrap_Object(OcmElements(((t_OcmElements *) arg)->object.this$));
              }
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmElements::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmElements result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::valueOf(a0));
                  return t_OcmElements::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmElements_values(PyTypeObject *type)
              {
                JArray< OcmElements > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::values());
                return JArray<jobject>(result.this$).wrap(t_OcmElements::wrap_jobject);
              }
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/data/SimpleTimeStampedTableParser.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SimpleTimeStampedTableParser::class$ = NULL;
      jmethodID *SimpleTimeStampedTableParser::mids$ = NULL;
      bool SimpleTimeStampedTableParser::live$ = false;

      jclass SimpleTimeStampedTableParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SimpleTimeStampedTableParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_055b2d7cea82c854] = env->getMethodID(cls, "<init>", "(ILorg/orekit/data/SimpleTimeStampedTableParser$RowConverter;)V");
          mids$[mid_parse_90de289641581563] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleTimeStampedTableParser::SimpleTimeStampedTableParser(jint a0, const ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_055b2d7cea82c854, a0, a1.this$)) {}

      ::java::util::List SimpleTimeStampedTableParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_90de289641581563], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_SimpleTimeStampedTableParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser_of_(t_SimpleTimeStampedTableParser *self, PyObject *args);
      static int t_SimpleTimeStampedTableParser_init_(t_SimpleTimeStampedTableParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleTimeStampedTableParser_parse(t_SimpleTimeStampedTableParser *self, PyObject *args);
      static PyObject *t_SimpleTimeStampedTableParser_get__parameters_(t_SimpleTimeStampedTableParser *self, void *data);
      static PyGetSetDef t_SimpleTimeStampedTableParser__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleTimeStampedTableParser, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleTimeStampedTableParser__methods_[] = {
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleTimeStampedTableParser)[] = {
        { Py_tp_methods, t_SimpleTimeStampedTableParser__methods_ },
        { Py_tp_init, (void *) t_SimpleTimeStampedTableParser_init_ },
        { Py_tp_getset, t_SimpleTimeStampedTableParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleTimeStampedTableParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleTimeStampedTableParser, t_SimpleTimeStampedTableParser, SimpleTimeStampedTableParser);
      PyObject *t_SimpleTimeStampedTableParser::wrap_Object(const SimpleTimeStampedTableParser& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser *self = (t_SimpleTimeStampedTableParser *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleTimeStampedTableParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser *self = (t_SimpleTimeStampedTableParser *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleTimeStampedTableParser::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleTimeStampedTableParser), &PY_TYPE_DEF(SimpleTimeStampedTableParser), module, "SimpleTimeStampedTableParser", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "RowConverter", make_descriptor(&PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter)));
      }

      void t_SimpleTimeStampedTableParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "class_", make_descriptor(SimpleTimeStampedTableParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "wrapfn_", make_descriptor(t_SimpleTimeStampedTableParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleTimeStampedTableParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleTimeStampedTableParser::initializeClass, 1)))
          return NULL;
        return t_SimpleTimeStampedTableParser::wrap_Object(SimpleTimeStampedTableParser(((t_SimpleTimeStampedTableParser *) arg)->object.this$));
      }
      static PyObject *t_SimpleTimeStampedTableParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleTimeStampedTableParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleTimeStampedTableParser_of_(t_SimpleTimeStampedTableParser *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleTimeStampedTableParser_init_(t_SimpleTimeStampedTableParser *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter a1((jobject) NULL);
        PyTypeObject **p1;
        SimpleTimeStampedTableParser object((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_SimpleTimeStampedTableParser$RowConverter::parameters_))
        {
          INT_CALL(object = SimpleTimeStampedTableParser(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleTimeStampedTableParser_parse(t_SimpleTimeStampedTableParser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
      static PyObject *t_SimpleTimeStampedTableParser_get__parameters_(t_SimpleTimeStampedTableParser *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/time/TimeScales.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frames::class$ = NULL;
      jmethodID *Frames::mids$ = NULL;
      bool Frames::live$ = false;

      jclass Frames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildUncachedITRF_d03d9d841d2585cb] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_7a43fbb334938fb6] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_238e1a1a48ce9b9b] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_7544a283da003d74] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_951ab15b750ec500] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_1d8cb946d8760b58] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_c8fe21bcdac65bf6] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_e0bf161d9af50163] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_7a43fbb334938fb6] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_c8fe21bcdac65bf6] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_7a43fbb334938fb6] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_604147dabe0b6681] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_7a43fbb334938fb6] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_f41281a5e34c0279] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_e0bf161d9af50163] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_7a43fbb334938fb6] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_238e1a1a48ce9b9b] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_f41281a5e34c0279] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_7a43fbb334938fb6] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_e0bf161d9af50163] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_7a43fbb334938fb6] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_238e1a1a48ce9b9b] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_of_0815e7d26613c028] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)Lorg/orekit/frames/Frames;");
          mids$[mid_of_2c16bfa6ff042f1b] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/frames/Frames;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame Frames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_d03d9d841d2585cb], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_238e1a1a48ce9b9b]));
      }

      ::org::orekit::frames::EOPHistory Frames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_7544a283da003d74], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_951ab15b750ec500], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_1d8cb946d8760b58], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_e0bf161d9af50163], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF Frames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_604147dabe0b6681], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_f41281a5e34c0279], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_e0bf161d9af50163], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_238e1a1a48ce9b9b]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_f41281a5e34c0279], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_e0bf161d9af50163], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_238e1a1a48ce9b9b]));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_0815e7d26613c028], a0.this$, a1.this$));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::bodies::CelestialBodies & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_2c16bfa6ff042f1b], a0.this$, a1.this$));
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
      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEME2000(t_Frames *self);
      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getGCRF(t_Frames *self);
      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getICRF(t_Frames *self);
      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTEME(t_Frames *self);
      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getVeis1950(t_Frames *self);
      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data);
      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data);
      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data);
      static PyGetSetDef t_Frames__fields_[] = {
        DECLARE_GET_FIELD(t_Frames, eME2000),
        DECLARE_GET_FIELD(t_Frames, gCRF),
        DECLARE_GET_FIELD(t_Frames, iCRF),
        DECLARE_GET_FIELD(t_Frames, tEME),
        DECLARE_GET_FIELD(t_Frames, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frames__methods_[] = {
        DECLARE_METHOD(t_Frames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, buildUncachedITRF, METH_O),
        DECLARE_METHOD(t_Frames, getCIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEME2000, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEcliptic, METH_O),
        DECLARE_METHOD(t_Frames, getFrame, METH_O),
        DECLARE_METHOD(t_Frames, getGCRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getGTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getICRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getITRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getITRFEquinox, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getMOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getPZ9011, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTEME, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getTIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getVeis1950, METH_NOARGS),
        DECLARE_METHOD(t_Frames, of, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frames)[] = {
        { Py_tp_methods, t_Frames__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Frames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frames, t_Frames, Frames);

      void t_Frames::install(PyObject *module)
      {
        installType(&PY_TYPE(Frames), &PY_TYPE_DEF(Frames), module, "Frames", 0);
      }

      void t_Frames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "class_", make_descriptor(Frames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "wrapfn_", make_descriptor(t_Frames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frames::initializeClass, 1)))
          return NULL;
        return t_Frames::wrap_Object(Frames(((t_Frames *) arg)->object.this$));
      }
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::time::UT1Scale a0((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.buildUncachedITRF(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "buildUncachedITRF", arg);
        return NULL;
      }

      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getEME2000(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = self->object.getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = self->object.getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_Frames_getGCRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getICRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getITRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_Frames_getTEME(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getVeis1950(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::java::util::function::Supplier a1((jobject) NULL);
            PyTypeObject **p1;
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *AccelerationModel::class$ = NULL;
        jmethodID *AccelerationModel::mids$ = NULL;
        bool AccelerationModel::live$ = false;

        jclass AccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/AccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_79518d097c897d26] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_4368a5d862927c08] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement AccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_79518d097c897d26], a0.this$, a1.this$));
        }

        jdouble AccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_4368a5d862927c08], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args);
        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args);

        static PyMethodDef t_AccelerationModel__methods_[] = {
          DECLARE_METHOD(t_AccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_AccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AccelerationModel)[] = {
          { Py_tp_methods, t_AccelerationModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AccelerationModel)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
          NULL
        };

        DEFINE_TYPE(AccelerationModel, t_AccelerationModel, AccelerationModel);

        void t_AccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AccelerationModel), &PY_TYPE_DEF(AccelerationModel), module, "AccelerationModel", 0);
        }

        void t_AccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "class_", make_descriptor(AccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "wrapfn_", make_descriptor(t_AccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AccelerationModel::initializeClass, 1)))
            return NULL;
          return t_AccelerationModel::wrap_Object(AccelerationModel(((t_AccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TrackingMode::class$ = NULL;
            jmethodID *TrackingMode::mids$ = NULL;
            bool TrackingMode::live$ = false;
            TrackingMode *TrackingMode::SEQUENTIAL = NULL;
            TrackingMode *TrackingMode::SINGLE_DIFF = NULL;

            jclass TrackingMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TrackingMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_8eec83b82f67b6c5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_values_d89b79b666f64522] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SEQUENTIAL = new TrackingMode(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                SINGLE_DIFF = new TrackingMode(env->getStaticObjectField(cls, "SINGLE_DIFF", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TrackingMode TrackingMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TrackingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8eec83b82f67b6c5], a0.this$));
            }

            JArray< TrackingMode > TrackingMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TrackingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_d89b79b666f64522]));
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
            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args);
            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TrackingMode_values(PyTypeObject *type);
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data);
            static PyGetSetDef t_TrackingMode__fields_[] = {
              DECLARE_GET_FIELD(t_TrackingMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TrackingMode__methods_[] = {
              DECLARE_METHOD(t_TrackingMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_TrackingMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TrackingMode)[] = {
              { Py_tp_methods, t_TrackingMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TrackingMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TrackingMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TrackingMode, t_TrackingMode, TrackingMode);
            PyObject *t_TrackingMode::wrap_Object(const TrackingMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TrackingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TrackingMode::install(PyObject *module)
            {
              installType(&PY_TYPE(TrackingMode), &PY_TYPE_DEF(TrackingMode), module, "TrackingMode", 0);
            }

            void t_TrackingMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "class_", make_descriptor(TrackingMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "wrapfn_", make_descriptor(t_TrackingMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(TrackingMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SEQUENTIAL", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SEQUENTIAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SINGLE_DIFF", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SINGLE_DIFF)));
            }

            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TrackingMode::initializeClass, 1)))
                return NULL;
              return t_TrackingMode::wrap_Object(TrackingMode(((t_TrackingMode *) arg)->object.this$));
            }
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TrackingMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TrackingMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::valueOf(a0));
                return t_TrackingMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TrackingMode_values(PyTypeObject *type)
            {
              JArray< TrackingMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::values());
              return JArray<jobject>(result.this$).wrap(t_TrackingMode::wrap_jobject);
            }
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data)
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
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *KthSelector::class$ = NULL;
      jmethodID *KthSelector::mids$ = NULL;
      bool KthSelector::live$ = false;

      jclass KthSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/KthSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_9e8828a4c3553c5c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/PivotingStrategy;)V");
          mids$[mid_getPivotingStrategy_2b26bc6a688cfe7a] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_select_b041aeb6eaabe37b] = env->getMethodID(cls, "select", "([D[II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      KthSelector::KthSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      KthSelector::KthSelector(const ::org::hipparchus::util::PivotingStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e8828a4c3553c5c, a0.this$)) {}

      ::org::hipparchus::util::PivotingStrategy KthSelector::getPivotingStrategy() const
      {
        return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_2b26bc6a688cfe7a]));
      }

      jdouble KthSelector::select(const JArray< jdouble > & a0, const JArray< jint > & a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_select_b041aeb6eaabe37b], a0.this$, a1.this$, a2);
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
      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self);
      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args);
      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data);
      static PyGetSetDef t_KthSelector__fields_[] = {
        DECLARE_GET_FIELD(t_KthSelector, pivotingStrategy),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KthSelector__methods_[] = {
        DECLARE_METHOD(t_KthSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, getPivotingStrategy, METH_NOARGS),
        DECLARE_METHOD(t_KthSelector, select, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KthSelector)[] = {
        { Py_tp_methods, t_KthSelector__methods_ },
        { Py_tp_init, (void *) t_KthSelector_init_ },
        { Py_tp_getset, t_KthSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KthSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(KthSelector, t_KthSelector, KthSelector);

      void t_KthSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(KthSelector), &PY_TYPE_DEF(KthSelector), module, "KthSelector", 0);
      }

      void t_KthSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "class_", make_descriptor(KthSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "wrapfn_", make_descriptor(t_KthSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KthSelector::initializeClass, 1)))
          return NULL;
        return t_KthSelector::wrap_Object(KthSelector(((t_KthSelector *) arg)->object.this$));
      }
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KthSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            KthSelector object((jobject) NULL);

            INT_CALL(object = KthSelector());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::util::PivotingStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            KthSelector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::util::PivotingStrategy::initializeClass, &a0, &p0, ::org::hipparchus::util::t_PivotingStrategy::parameters_))
            {
              INT_CALL(object = KthSelector(a0));
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

      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self)
      {
        ::org::hipparchus::util::PivotingStrategy result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(result);
      }

      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jint > a1((jobject) NULL);
        jint a2;
        jdouble result;

        if (!parseArgs(args, "[D[II", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.select(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "select", args);
        return NULL;
      }

      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data)
      {
        ::org::hipparchus::util::PivotingStrategy value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DerivativeStructure::class$ = NULL;
        jmethodID *DerivativeStructure::mids$ = NULL;
        bool DerivativeStructure::live$ = false;

        jclass DerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_c8ca2097cc2fbc0a] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acos_c8ca2097cc2fbc0a] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acosh_c8ca2097cc2fbc0a] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_fb434e13a8e86d82] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_c8b983f259312c1e] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asin_c8ca2097cc2fbc0a] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asinh_c8ca2097cc2fbc0a] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan_c8ca2097cc2fbc0a] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_fb434e13a8e86d82] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_45eb9750ccb66723] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atanh_c8ca2097cc2fbc0a] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cbrt_c8ca2097cc2fbc0a] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ceil_c8ca2097cc2fbc0a] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_compose_a99895f2c956a8f6] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_fb434e13a8e86d82] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_c8b983f259312c1e] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cos_c8ca2097cc2fbc0a] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cosh_c8ca2097cc2fbc0a] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_differentiate_9d37b633f691b62a] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_fb434e13a8e86d82] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_c8b983f259312c1e] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_c8ca2097cc2fbc0a] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_expm1_c8ca2097cc2fbc0a] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_floor_c8ca2097cc2fbc0a] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getAllDerivatives_7cdc325af0834901] = env->getMethodID(cls, "getAllDerivatives", "()[D");
            mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_e7935a18a3f27d68] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/DSFactory;");
            mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_29ffeeddaa7151a9] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPi_c8ca2097cc2fbc0a] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_fb434e13a8e86d82] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hypot_45eb9750ccb66723] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_integrate_9d37b633f691b62a] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_3195fd1e5e45bf64] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_7dce6f66052819b2] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_5c52d034a51c52e0] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_0e1c413695673d3f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_50edebed1eed703c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_566d6c70969909c9] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_3a128f0a25f95075] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_5b33406378fdd5ff] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log_c8ca2097cc2fbc0a] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log10_c8ca2097cc2fbc0a] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log1p_c8ca2097cc2fbc0a] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_fb434e13a8e86d82] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_c8b983f259312c1e] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_e42bfd21ac531fa1] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_negate_c8ca2097cc2fbc0a] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_newInstance_c8b983f259312c1e] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_fb434e13a8e86d82] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_c8b983f259312c1e] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_e42bfd21ac531fa1] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_d1def76ca0efa92b] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rebase_5d4ac565bbe32c28] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_reciprocal_c8ca2097cc2fbc0a] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_fb434e13a8e86d82] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_c8b983f259312c1e] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rint_c8ca2097cc2fbc0a] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rootN_e42bfd21ac531fa1] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_scalb_e42bfd21ac531fa1] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sign_c8ca2097cc2fbc0a] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sin_c8ca2097cc2fbc0a] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_c8ca2097cc2fbc0a] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_c8ca2097cc2fbc0a] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_fb434e13a8e86d82] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_c8b983f259312c1e] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tan_c8ca2097cc2fbc0a] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tanh_c8ca2097cc2fbc0a] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_taylor_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_c8ca2097cc2fbc0a] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_c8ca2097cc2fbc0a] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ulp_c8ca2097cc2fbc0a] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DerivativeStructure DerivativeStructure::abs() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::acos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::acosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::add(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_fb434e13a8e86d82], a0.this$));
        }

        DerivativeStructure DerivativeStructure::add(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_c8b983f259312c1e], a0));
        }

        DerivativeStructure DerivativeStructure::asin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::asinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::atan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_fb434e13a8e86d82], a0.this$));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_45eb9750ccb66723], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::atanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::cbrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::ceil() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_a99895f2c956a8f6], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_fb434e13a8e86d82], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_c8b983f259312c1e], a0));
        }

        DerivativeStructure DerivativeStructure::cos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::cosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_9d37b633f691b62a], a0, a1));
        }

        DerivativeStructure DerivativeStructure::divide(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_fb434e13a8e86d82], a0.this$));
        }

        DerivativeStructure DerivativeStructure::divide(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_c8b983f259312c1e], a0));
        }

        jboolean DerivativeStructure::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        DerivativeStructure DerivativeStructure::exp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::expm1() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::floor() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_c8ca2097cc2fbc0a]));
        }

        JArray< jdouble > DerivativeStructure::getAllDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_7cdc325af0834901]));
        }

        jint DerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::differentiation::DSFactory DerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_e7935a18a3f27d68]));
        }

        ::org::hipparchus::Field DerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
        }

        jint DerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_f2f64475e4580546]);
        }

        jint DerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        jdouble DerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_29ffeeddaa7151a9], a0.this$);
        }

        DerivativeStructure DerivativeStructure::getPi() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_c8ca2097cc2fbc0a]));
        }

        jdouble DerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
        }

        jdouble DerivativeStructure::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
        }

        jint DerivativeStructure::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_fb434e13a8e86d82], a0.this$));
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_45eb9750ccb66723], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::integrate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_9d37b633f691b62a], a0, a1));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_3195fd1e5e45bf64], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< DerivativeStructure > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_7dce6f66052819b2], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_5c52d034a51c52e0], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_0e1c413695673d3f], a0, a1.this$, a2, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_50edebed1eed703c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_566d6c70969909c9], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5, const DerivativeStructure & a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_3a128f0a25f95075], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5, jdouble a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_5b33406378fdd5ff], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        DerivativeStructure DerivativeStructure::log() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::log10() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::log1p() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::multiply(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_fb434e13a8e86d82], a0.this$));
        }

        DerivativeStructure DerivativeStructure::multiply(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_c8b983f259312c1e], a0));
        }

        DerivativeStructure DerivativeStructure::multiply(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_e42bfd21ac531fa1], a0));
        }

        DerivativeStructure DerivativeStructure::negate() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::newInstance(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_c8b983f259312c1e], a0));
        }

        DerivativeStructure DerivativeStructure::pow(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_fb434e13a8e86d82], a0.this$));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_c8b983f259312c1e], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_e42bfd21ac531fa1], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_d1def76ca0efa92b], a0, a1.this$));
        }

        DerivativeStructure DerivativeStructure::rebase(const JArray< DerivativeStructure > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_5d4ac565bbe32c28], a0.this$));
        }

        DerivativeStructure DerivativeStructure::reciprocal() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::remainder(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_fb434e13a8e86d82], a0.this$));
        }

        DerivativeStructure DerivativeStructure::remainder(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_c8b983f259312c1e], a0));
        }

        DerivativeStructure DerivativeStructure::rint() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::rootN(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_e42bfd21ac531fa1], a0));
        }

        DerivativeStructure DerivativeStructure::scalb(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_e42bfd21ac531fa1], a0));
        }

        DerivativeStructure DerivativeStructure::sign() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::sin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_c8ca2097cc2fbc0a]));
        }

        ::org::hipparchus::util::FieldSinCos DerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
        }

        DerivativeStructure DerivativeStructure::sinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_c8ca2097cc2fbc0a]));
        }

        ::org::hipparchus::util::FieldSinhCosh DerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
        }

        DerivativeStructure DerivativeStructure::sqrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::subtract(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_fb434e13a8e86d82], a0.this$));
        }

        DerivativeStructure DerivativeStructure::subtract(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_c8b983f259312c1e], a0));
        }

        DerivativeStructure DerivativeStructure::tan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::tanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_c8ca2097cc2fbc0a]));
        }

        jdouble DerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_f05cb8c6dfd5e0b9], a0.this$);
        }

        DerivativeStructure DerivativeStructure::toDegrees() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::toRadians() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_c8ca2097cc2fbc0a]));
        }

        DerivativeStructure DerivativeStructure::ulp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_c8ca2097cc2fbc0a]));
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
        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data);
        static PyGetSetDef t_DerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_DerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_DerivativeStructure, factory),
          DECLARE_GET_FIELD(t_DerivativeStructure, field),
          DECLARE_GET_FIELD(t_DerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_DerivativeStructure, order),
          DECLARE_GET_FIELD(t_DerivativeStructure, pi),
          DECLARE_GET_FIELD(t_DerivativeStructure, real),
          DECLARE_GET_FIELD(t_DerivativeStructure, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_DerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, compose, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, equals, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, taylor, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeStructure)[] = {
          { Py_tp_methods, t_DerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeStructure, t_DerivativeStructure, DerivativeStructure);

        void t_DerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeStructure), &PY_TYPE_DEF(DerivativeStructure), module, "DerivativeStructure", 0);
        }

        void t_DerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "class_", make_descriptor(DerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "wrapfn_", make_descriptor(t_DerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_DerivativeStructure::wrap_Object(DerivativeStructure(((t_DerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::atan2(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return result.wrap();
        }

        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::hypot(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[k", DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              JArray< DerivativeStructure > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[k[k", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure a6((jobject) NULL);
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              jdouble a6;
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "Dk", DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::pow(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< DerivativeStructure > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return value.wrap();
        }

        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data)
        {
          DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data)
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
#include "org/hipparchus/distribution/continuous/ExponentialDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ExponentialDistribution::class$ = NULL;
        jmethodID *ExponentialDistribution::mids$ = NULL;
        bool ExponentialDistribution::live$ = false;

        jclass ExponentialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ExponentialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExponentialDistribution::ExponentialDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        jdouble ExponentialDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble ExponentialDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble ExponentialDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_456d9a2f64d6b28d]);
        }

        jdouble ExponentialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble ExponentialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble ExponentialDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble ExponentialDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble ExponentialDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean ExponentialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble ExponentialDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self);
        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data);
        static PyGetSetDef t_ExponentialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ExponentialDistribution, mean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExponentialDistribution__methods_[] = {
          DECLARE_METHOD(t_ExponentialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExponentialDistribution)[] = {
          { Py_tp_methods, t_ExponentialDistribution__methods_ },
          { Py_tp_init, (void *) t_ExponentialDistribution_init_ },
          { Py_tp_getset, t_ExponentialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExponentialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ExponentialDistribution, t_ExponentialDistribution, ExponentialDistribution);

        void t_ExponentialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ExponentialDistribution), &PY_TYPE_DEF(ExponentialDistribution), module, "ExponentialDistribution", 0);
        }

        void t_ExponentialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "class_", make_descriptor(ExponentialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "wrapfn_", make_descriptor(t_ExponentialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExponentialDistribution::initializeClass, 1)))
            return NULL;
          return t_ExponentialDistribution::wrap_Object(ExponentialDistribution(((t_ExponentialDistribution *) arg)->object.this$));
        }
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExponentialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ExponentialDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ExponentialDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *InertiaAxis::class$ = NULL;
      jmethodID *InertiaAxis::mids$ = NULL;
      bool InertiaAxis::live$ = false;

      jclass InertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/InertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getA_17a952530a808943] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_negate_c91d001b4ca9ba20] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/InertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D InertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA_17a952530a808943]));
      }

      jdouble InertiaAxis::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_456d9a2f64d6b28d]);
      }

      InertiaAxis InertiaAxis::negate() const
      {
        return InertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_c91d001b4ca9ba20]));
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
      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data);
      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data);
      static PyGetSetDef t_InertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_InertiaAxis, a),
        DECLARE_GET_FIELD(t_InertiaAxis, i),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InertiaAxis__methods_[] = {
        DECLARE_METHOD(t_InertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InertiaAxis)[] = {
        { Py_tp_methods, t_InertiaAxis__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_InertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InertiaAxis, t_InertiaAxis, InertiaAxis);

      void t_InertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(InertiaAxis), &PY_TYPE_DEF(InertiaAxis), module, "InertiaAxis", 0);
      }

      void t_InertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "class_", make_descriptor(InertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "wrapfn_", make_descriptor(t_InertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InertiaAxis::initializeClass, 1)))
          return NULL;
        return t_InertiaAxis::wrap_Object(InertiaAxis(((t_InertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self)
      {
        InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/FieldHermiteInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldHermiteInterpolator::class$ = NULL;
        jmethodID *FieldHermiteInterpolator::mids$ = NULL;
        bool FieldHermiteInterpolator::live$ = false;

        jclass FieldHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_582c9985f7b0d997] = env->getMethodID(cls, "addSamplePoint", "(Lorg/hipparchus/FieldElement;[[Lorg/hipparchus/FieldElement;)V");
            mids$[mid_derivatives_6f56b4b654bc1b5f] = env->getMethodID(cls, "derivatives", "(Lorg/hipparchus/FieldElement;I)[[Lorg/hipparchus/FieldElement;");
            mids$[mid_value_8dee20fd2d307a07] = env->getMethodID(cls, "value", "(Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldHermiteInterpolator::FieldHermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void FieldHermiteInterpolator::addSamplePoint(const ::org::hipparchus::FieldElement & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_582c9985f7b0d997], a0.this$, a1.this$);
        }

        JArray< JArray< ::org::hipparchus::FieldElement > > FieldHermiteInterpolator::derivatives(const ::org::hipparchus::FieldElement & a0, jint a1) const
        {
          return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_derivatives_6f56b4b654bc1b5f], a0.this$, a1));
        }

        JArray< ::org::hipparchus::FieldElement > FieldHermiteInterpolator::value(const ::org::hipparchus::FieldElement & a0) const
        {
          return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_value_8dee20fd2d307a07], a0.this$));
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
      namespace interpolation {
        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args);
        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data);
        static PyGetSetDef t_FieldHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, addSamplePoint, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, derivatives, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldHermiteInterpolator)[] = {
          { Py_tp_methods, t_FieldHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_FieldHermiteInterpolator_init_ },
          { Py_tp_getset, t_FieldHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldHermiteInterpolator, t_FieldHermiteInterpolator, FieldHermiteInterpolator);
        PyObject *t_FieldHermiteInterpolator::wrap_Object(const FieldHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldHermiteInterpolator), &PY_TYPE_DEF(FieldHermiteInterpolator), module, "FieldHermiteInterpolator", 0);
        }

        void t_FieldHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "class_", make_descriptor(FieldHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldHermiteInterpolator::wrap_Object(FieldHermiteInterpolator(((t_FieldHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          FieldHermiteInterpolator object((jobject) NULL);

          INT_CALL(object = FieldHermiteInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "K[[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(self->object.addSamplePoint(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSamplePoint", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.derivatives(a0, a1));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "derivatives", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TDOATroposphericDelayModifier::class$ = NULL;
          jmethodID *TDOATroposphericDelayModifier::mids$ = NULL;
          bool TDOATroposphericDelayModifier::live$ = false;

          jclass TDOATroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8171254277c9834a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOATroposphericDelayModifier::TDOATroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8171254277c9834a, a0.this$)) {}

          ::java::util::List TDOATroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void TDOATroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void TDOATroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self);
          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOATroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOATroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOATroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOATroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOATroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOATroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOATroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOATroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOATroposphericDelayModifier, t_TDOATroposphericDelayModifier, TDOATroposphericDelayModifier);

          void t_TDOATroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOATroposphericDelayModifier), &PY_TYPE_DEF(TDOATroposphericDelayModifier), module, "TDOATroposphericDelayModifier", 0);
          }

          void t_TDOATroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "class_", make_descriptor(TDOATroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "wrapfn_", make_descriptor(t_TDOATroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOATroposphericDelayModifier::wrap_Object(TDOATroposphericDelayModifier(((t_TDOATroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TDOATroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TDOATroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadata::class$ = NULL;
            jmethodID *CdmMetadata::mids$ = NULL;
            bool CdmMetadata::live$ = false;

            jclass CdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_959fe257032a39c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                mids$[mid_getAdmMsgLink_0090f7797e403f43] = env->getMethodID(cls, "getAdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getAltCovRefFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getAltCovRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getAltCovType_8c2464a907a5a4bb] = env->getMethodID(cls, "getAltCovType", "()Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_getAtmosphericModel_0090f7797e403f43] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                mids$[mid_getCatalogName_0090f7797e403f43] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                mids$[mid_getCovarianceMethod_92706c2f2eb2e248] = env->getMethodID(cls, "getCovarianceMethod", "()Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_getCovarianceSource_0090f7797e403f43] = env->getMethodID(cls, "getCovarianceSource", "()Ljava/lang/String;");
                mids$[mid_getEarthTides_03b02c6cedb410fa] = env->getMethodID(cls, "getEarthTides", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getEphemName_0090f7797e403f43] = env->getMethodID(cls, "getEphemName", "()Ljava/lang/String;");
                mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGravityDegree_f2f64475e4580546] = env->getMethodID(cls, "getGravityDegree", "()I");
                mids$[mid_getGravityModel_0090f7797e403f43] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                mids$[mid_getGravityOrder_f2f64475e4580546] = env->getMethodID(cls, "getGravityOrder", "()I");
                mids$[mid_getInternationalDes_0090f7797e403f43] = env->getMethodID(cls, "getInternationalDes", "()Ljava/lang/String;");
                mids$[mid_getIntrackThrust_03b02c6cedb410fa] = env->getMethodID(cls, "getIntrackThrust", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getManeuverable_87b100a305e3ccfd] = env->getMethodID(cls, "getManeuverable", "()Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getNBodyPerturbations_a6156df500549a58] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                mids$[mid_getObject_0090f7797e403f43] = env->getMethodID(cls, "getObject", "()Ljava/lang/String;");
                mids$[mid_getObjectDesignator_0090f7797e403f43] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                mids$[mid_getObjectName_0090f7797e403f43] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_getObjectType_8be2b7ef61e9b842] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                mids$[mid_getObsBeforeNextMessage_03b02c6cedb410fa] = env->getMethodID(cls, "getObsBeforeNextMessage", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getOdmMsgLink_0090f7797e403f43] = env->getMethodID(cls, "getOdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getOperatorContactPosition_0090f7797e403f43] = env->getMethodID(cls, "getOperatorContactPosition", "()Ljava/lang/String;");
                mids$[mid_getOperatorEmail_0090f7797e403f43] = env->getMethodID(cls, "getOperatorEmail", "()Ljava/lang/String;");
                mids$[mid_getOperatorOrganization_0090f7797e403f43] = env->getMethodID(cls, "getOperatorOrganization", "()Ljava/lang/String;");
                mids$[mid_getOperatorPhone_0090f7797e403f43] = env->getMethodID(cls, "getOperatorPhone", "()Ljava/lang/String;");
                mids$[mid_getOrbitCenter_78375ee64056f203] = env->getMethodID(cls, "getOrbitCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getRefFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getRelativeMetadata_f8673e4c3b4aceb6] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getSolarRadiationPressure_03b02c6cedb410fa] = env->getMethodID(cls, "getSolarRadiationPressure", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_setAdmMsgLink_e939c6558ae8d313] = env->getMethodID(cls, "setAdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setAltCovRefFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setAltCovRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setAltCovType_d2aedb94a889b159] = env->getMethodID(cls, "setAltCovType", "(Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;)V");
                mids$[mid_setAtmosphericModel_e939c6558ae8d313] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                mids$[mid_setCatalogName_e939c6558ae8d313] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                mids$[mid_setCovarianceMethod_535e77e9093c5cfb] = env->getMethodID(cls, "setCovarianceMethod", "(Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;)V");
                mids$[mid_setCovarianceSource_e939c6558ae8d313] = env->getMethodID(cls, "setCovarianceSource", "(Ljava/lang/String;)V");
                mids$[mid_setEarthTides_e1d48d83020845bd] = env->getMethodID(cls, "setEarthTides", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setEphemName_e939c6558ae8d313] = env->getMethodID(cls, "setEphemName", "(Ljava/lang/String;)V");
                mids$[mid_setGravityModel_10ca79ad48bfee14] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                mids$[mid_setInternationalDes_e939c6558ae8d313] = env->getMethodID(cls, "setInternationalDes", "(Ljava/lang/String;)V");
                mids$[mid_setIntrackThrust_e1d48d83020845bd] = env->getMethodID(cls, "setIntrackThrust", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setManeuverable_c7a507e75d4e7ebb] = env->getMethodID(cls, "setManeuverable", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");
                mids$[mid_setNBodyPerturbations_65de9727799c5641] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                mids$[mid_setObject_e939c6558ae8d313] = env->getMethodID(cls, "setObject", "(Ljava/lang/String;)V");
                mids$[mid_setObjectDesignator_e939c6558ae8d313] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_e939c6558ae8d313] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_setObjectType_221568b09df5e761] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                mids$[mid_setObsBeforeNextMessage_e1d48d83020845bd] = env->getMethodID(cls, "setObsBeforeNextMessage", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setOdmMsgLink_e939c6558ae8d313] = env->getMethodID(cls, "setOdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorContactPosition_e939c6558ae8d313] = env->getMethodID(cls, "setOperatorContactPosition", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorEmail_e939c6558ae8d313] = env->getMethodID(cls, "setOperatorEmail", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorOrganization_e939c6558ae8d313] = env->getMethodID(cls, "setOperatorOrganization", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorPhone_e939c6558ae8d313] = env->getMethodID(cls, "setOperatorPhone", "(Ljava/lang/String;)V");
                mids$[mid_setOrbitCenter_4937bc9292f008b1] = env->getMethodID(cls, "setOrbitCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setRefFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setRelativeMetadata_4e27559327bbd332] = env->getMethodID(cls, "setRelativeMetadata", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_setSolarRadiationPressure_e1d48d83020845bd] = env->getMethodID(cls, "setSolarRadiationPressure", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadata::CdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            CdmMetadata::CdmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_959fe257032a39c0, a0.this$)) {}

            ::java::lang::String CdmMetadata::getAdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMsgLink_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getAltCovRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getAltCovRefFrame_aa70fdb14ae9305f]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType CdmMetadata::getAltCovType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType(env->callObjectMethod(this$, mids$[mid_getAltCovType_8c2464a907a5a4bb]));
            }

            ::java::lang::String CdmMetadata::getAtmosphericModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_0090f7797e403f43]));
            }

            ::java::lang::String CdmMetadata::getCatalogName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod CdmMetadata::getCovarianceMethod() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod(env->callObjectMethod(this$, mids$[mid_getCovarianceMethod_92706c2f2eb2e248]));
            }

            ::java::lang::String CdmMetadata::getCovarianceSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovarianceSource_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getEarthTides() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getEarthTides_03b02c6cedb410fa]));
            }

            ::java::lang::String CdmMetadata::getEphemName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEphemName_0090f7797e403f43]));
            }

            ::org::orekit::frames::Frame CdmMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
            }

            jint CdmMetadata::getGravityDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityDegree_f2f64475e4580546]);
            }

            ::java::lang::String CdmMetadata::getGravityModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_0090f7797e403f43]));
            }

            jint CdmMetadata::getGravityOrder() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityOrder_f2f64475e4580546]);
            }

            ::java::lang::String CdmMetadata::getInternationalDes() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDes_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getIntrackThrust() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getIntrackThrust_03b02c6cedb410fa]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable CdmMetadata::getManeuverable() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable(env->callObjectMethod(this$, mids$[mid_getManeuverable_87b100a305e3ccfd]));
            }

            ::java::util::List CdmMetadata::getNBodyPerturbations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_a6156df500549a58]));
            }

            ::java::lang::String CdmMetadata::getObject() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObject_0090f7797e403f43]));
            }

            ::java::lang::String CdmMetadata::getObjectDesignator() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_0090f7797e403f43]));
            }

            ::java::lang::String CdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType CdmMetadata::getObjectType() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_8be2b7ef61e9b842]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getObsBeforeNextMessage() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getObsBeforeNextMessage_03b02c6cedb410fa]));
            }

            ::java::lang::String CdmMetadata::getOdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMsgLink_0090f7797e403f43]));
            }

            ::java::lang::String CdmMetadata::getOperatorContactPosition() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorContactPosition_0090f7797e403f43]));
            }

            ::java::lang::String CdmMetadata::getOperatorEmail() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorEmail_0090f7797e403f43]));
            }

            ::java::lang::String CdmMetadata::getOperatorOrganization() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorOrganization_0090f7797e403f43]));
            }

            ::java::lang::String CdmMetadata::getOperatorPhone() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorPhone_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade CdmMetadata::getOrbitCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getOrbitCenter_78375ee64056f203]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getRefFrame_aa70fdb14ae9305f]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata CdmMetadata::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_f8673e4c3b4aceb6]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getSolarRadiationPressure() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getSolarRadiationPressure_03b02c6cedb410fa]));
            }

            void CdmMetadata::setAdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdmMsgLink_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setAltCovRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovRefFrame_a455f3ff24eb0b47], a0.this$);
            }

            void CdmMetadata::setAltCovType(const ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovType_d2aedb94a889b159], a0.this$);
            }

            void CdmMetadata::setAtmosphericModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setCatalogName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCatalogName_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setCovarianceMethod(const ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMethod_535e77e9093c5cfb], a0.this$);
            }

            void CdmMetadata::setCovarianceSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceSource_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setEarthTides(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEarthTides_e1d48d83020845bd], a0.this$);
            }

            void CdmMetadata::setEphemName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemName_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setGravityModel_10ca79ad48bfee14], a0.this$, a1, a2);
            }

            void CdmMetadata::setInternationalDes(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInternationalDes_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setIntrackThrust(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntrackThrust_e1d48d83020845bd], a0.this$);
            }

            void CdmMetadata::setManeuverable(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setManeuverable_c7a507e75d4e7ebb], a0.this$);
            }

            void CdmMetadata::setNBodyPerturbations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_65de9727799c5641], a0.this$);
            }

            void CdmMetadata::setObject(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObject_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectDesignator_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectType_221568b09df5e761], a0.this$);
            }

            void CdmMetadata::setObsBeforeNextMessage(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsBeforeNextMessage_e1d48d83020845bd], a0.this$);
            }

            void CdmMetadata::setOdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdmMsgLink_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setOperatorContactPosition(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorContactPosition_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setOperatorEmail(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorEmail_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setOperatorOrganization(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorOrganization_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setOperatorPhone(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorPhone_e939c6558ae8d313], a0.this$);
            }

            void CdmMetadata::setOrbitCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOrbitCenter_4937bc9292f008b1], a0.this$);
            }

            void CdmMetadata::setRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRefFrame_a455f3ff24eb0b47], a0.this$);
            }

            void CdmMetadata::setRelativeMetadata(const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeMetadata_4e27559327bbd332], a0.this$);
            }

            void CdmMetadata::setSolarRadiationPressure(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadiationPressure_e1d48d83020845bd], a0.this$);
            }

            void CdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMetadata, admMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovRefFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, atmosphericModel),
              DECLARE_GETSET_FIELD(t_CdmMetadata, catalogName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceMethod),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceSource),
              DECLARE_GETSET_FIELD(t_CdmMetadata, earthTides),
              DECLARE_GETSET_FIELD(t_CdmMetadata, ephemName),
              DECLARE_GET_FIELD(t_CdmMetadata, frame),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityDegree),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityModel),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityOrder),
              DECLARE_GETSET_FIELD(t_CdmMetadata, internationalDes),
              DECLARE_GETSET_FIELD(t_CdmMetadata, intrackThrust),
              DECLARE_GETSET_FIELD(t_CdmMetadata, maneuverable),
              DECLARE_GETSET_FIELD(t_CdmMetadata, nBodyPerturbations),
              DECLARE_GETSET_FIELD(t_CdmMetadata, object),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectDesignator),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, obsBeforeNextMessage),
              DECLARE_GETSET_FIELD(t_CdmMetadata, odmMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorContactPosition),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorEmail),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorOrganization),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorPhone),
              DECLARE_GETSET_FIELD(t_CdmMetadata, orbitCenter),
              DECLARE_GETSET_FIELD(t_CdmMetadata, refFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, relativeMetadata),
              DECLARE_GETSET_FIELD(t_CdmMetadata, solarRadiationPressure),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, getAdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAtmosphericModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCatalogName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceSource, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEarthTides, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEphemName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityDegree, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityOrder, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getInternationalDes, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getIntrackThrust, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getManeuverable, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getNBodyPerturbations, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObject, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectDesignator, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObsBeforeNextMessage, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorContactPosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorEmail, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorOrganization, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorPhone, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOrbitCenter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getSolarRadiationPressure, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, setAdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAtmosphericModel, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCatalogName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceMethod, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceSource, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEarthTides, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEphemName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setGravityModel, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadata, setInternationalDes, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setIntrackThrust, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setManeuverable, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setNBodyPerturbations, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObject, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectDesignator, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObsBeforeNextMessage, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorContactPosition, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorEmail, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorOrganization, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorPhone, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOrbitCenter, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRelativeMetadata, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setSolarRadiationPressure, METH_O),
              DECLARE_METHOD(t_CdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadata)[] = {
              { Py_tp_methods, t_CdmMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmMetadata_init_ },
              { Py_tp_getset, t_CdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(CdmMetadata, t_CdmMetadata, CdmMetadata);

            void t_CdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadata), &PY_TYPE_DEF(CdmMetadata), module, "CdmMetadata", 0);
            }

            void t_CdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "class_", make_descriptor(CdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "wrapfn_", make_descriptor(t_CdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmMetadata::wrap_Object(CdmMetadata(((t_CdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  CdmMetadata object((jobject) NULL);

                  INT_CALL(object = CdmMetadata());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  CdmMetadata object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    INT_CALL(object = CdmMetadata(a0));
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

            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAtmosphericModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCatalogName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceSource());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getGravityModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityOrder());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInternationalDes());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable result((jobject) NULL);
              OBJ_CALL(result = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
            }

            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObject());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectDesignator());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorContactPosition());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorEmail());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorOrganization());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorPhone());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setAdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAltCovRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::parameters_))
              {
                OBJ_CALL(self->object.setAltCovType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setAtmosphericModel(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAtmosphericModel", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCatalogName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCatalogName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::parameters_))
              {
                OBJ_CALL(self->object.setCovarianceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovarianceSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceSource", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setEarthTides(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEarthTides", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setEphemName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setGravityModel(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGravityModel", args);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInternationalDes(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInternationalDes", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setIntrackThrust(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntrackThrust", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
              {
                OBJ_CALL(self->object.setManeuverable(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setManeuverable", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setNBodyPerturbations(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setNBodyPerturbations", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObject(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObject", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectDesignator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectDesignator", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::parameters_))
              {
                OBJ_CALL(self->object.setObjectType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setObsBeforeNextMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObsBeforeNextMessage", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorContactPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorContactPosition", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorEmail(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorEmail", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorOrganization(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorOrganization", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorPhone(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorPhone", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setOrbitCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOrbitCenter", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRelativeMetadata(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeMetadata", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setSolarRadiationPressure(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadiationPressure", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setAdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "admMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovRefFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAtmosphericModel());
              return j2p(value);
            }
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setAtmosphericModel(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "atmosphericModel", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCatalogName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCatalogName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "catalogName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(value);
            }
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMethod", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceSource());
              return j2p(value);
            }
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovarianceSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceSource", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setEarthTides(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "earthTides", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setEphemName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityDegree());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getGravityModel());
              return j2p(value);
            }

            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityOrder());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInternationalDes());
              return j2p(value);
            }
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInternationalDes(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "internationalDes", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntrackThrust(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "intrackThrust", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
              OBJ_CALL(value = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(value);
            }
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &value))
                {
                  INT_CALL(self->object.setManeuverable(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maneuverable", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setNBodyPerturbations(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "nBodyPerturbations", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObject());
              return j2p(value);
            }
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObject(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "object", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectDesignator());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectDesignator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectDesignator", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &value))
                {
                  INT_CALL(self->object.setObjectType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setObsBeforeNextMessage(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "obsBeforeNextMessage", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "odmMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorContactPosition());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorContactPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorContactPosition", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorEmail());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorEmail(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorEmail", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorOrganization());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorOrganization(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorOrganization", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorPhone());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorPhone(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorPhone", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setOrbitCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "orbitCenter", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "refFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &value))
                {
                  INT_CALL(self->object.setRelativeMetadata(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeMetadata", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setSolarRadiationPressure(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadiationPressure", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OrekitConfiguration.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OrekitConfiguration::class$ = NULL;
      jmethodID *OrekitConfiguration::mids$ = NULL;
      bool OrekitConfiguration::live$ = false;

      jclass OrekitConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OrekitConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCacheSlotsNumber_f2f64475e4580546] = env->getStaticMethodID(cls, "getCacheSlotsNumber", "()I");
          mids$[mid_setCacheSlotsNumber_0a2a1ac2721c0336] = env->getStaticMethodID(cls, "setCacheSlotsNumber", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint OrekitConfiguration::getCacheSlotsNumber()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getCacheSlotsNumber_f2f64475e4580546]);
      }

      void OrekitConfiguration::setCacheSlotsNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setCacheSlotsNumber_0a2a1ac2721c0336], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type);
      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data);
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data);
      static PyGetSetDef t_OrekitConfiguration__fields_[] = {
        DECLARE_GETSET_FIELD(t_OrekitConfiguration, cacheSlotsNumber),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitConfiguration__methods_[] = {
        DECLARE_METHOD(t_OrekitConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, getCacheSlotsNumber, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, setCacheSlotsNumber, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitConfiguration)[] = {
        { Py_tp_methods, t_OrekitConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrekitConfiguration, t_OrekitConfiguration, OrekitConfiguration);

      void t_OrekitConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitConfiguration), &PY_TYPE_DEF(OrekitConfiguration), module, "OrekitConfiguration", 0);
      }

      void t_OrekitConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "class_", make_descriptor(OrekitConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "wrapfn_", make_descriptor(t_OrekitConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitConfiguration::initializeClass, 1)))
          return NULL;
        return t_OrekitConfiguration::wrap_Object(OrekitConfiguration(((t_OrekitConfiguration *) arg)->object.this$));
      }
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type)
      {
        jint result;
        OBJ_CALL(result = ::org::orekit::utils::OrekitConfiguration::getCacheSlotsNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(::org::orekit::utils::OrekitConfiguration::setCacheSlotsNumber(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setCacheSlotsNumber", arg);
        return NULL;
      }

      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCacheSlotsNumber());
        return PyLong_FromLong((long) value);
      }
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setCacheSlotsNumber(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "cacheSlotsNumber", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxIter::class$ = NULL;
      jmethodID *MaxIter::mids$ = NULL;
      bool MaxIter::live$ = false;

      jclass MaxIter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxIter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxIter_f2f64475e4580546] = env->getMethodID(cls, "getMaxIter", "()I");
          mids$[mid_unlimited_e7a0d71697a76da2] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxIter;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxIter::MaxIter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      jint MaxIter::getMaxIter() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIter_f2f64475e4580546]);
      }

      MaxIter MaxIter::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxIter(env->callStaticObjectMethod(cls, mids$[mid_unlimited_e7a0d71697a76da2]));
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
      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self);
      static PyObject *t_MaxIter_unlimited(PyTypeObject *type);
      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data);
      static PyGetSetDef t_MaxIter__fields_[] = {
        DECLARE_GET_FIELD(t_MaxIter, maxIter),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxIter__methods_[] = {
        DECLARE_METHOD(t_MaxIter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, getMaxIter, METH_NOARGS),
        DECLARE_METHOD(t_MaxIter, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxIter)[] = {
        { Py_tp_methods, t_MaxIter__methods_ },
        { Py_tp_init, (void *) t_MaxIter_init_ },
        { Py_tp_getset, t_MaxIter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxIter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxIter, t_MaxIter, MaxIter);

      void t_MaxIter::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxIter), &PY_TYPE_DEF(MaxIter), module, "MaxIter", 0);
      }

      void t_MaxIter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "class_", make_descriptor(MaxIter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "wrapfn_", make_descriptor(t_MaxIter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxIter::initializeClass, 1)))
          return NULL;
        return t_MaxIter::wrap_Object(MaxIter(((t_MaxIter *) arg)->object.this$));
      }
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxIter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxIter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxIter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIter());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxIter_unlimited(PyTypeObject *type)
      {
        MaxIter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxIter::unlimited());
        return t_MaxIter::wrap_Object(result);
      }

      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIter());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonFieldStaticTransform.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonFieldStaticTransform::class$ = NULL;
      jmethodID *PythonFieldStaticTransform::mids$ = NULL;
      bool PythonFieldStaticTransform::live$ = false;

      jclass PythonFieldStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonFieldStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_dd9256b23dabf6f6] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_ac4489fdef1c3aef] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_5791f80683b5227e] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldStaticTransform::PythonFieldStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldStaticTransform::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args);
      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self);
      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data);
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data);
      static PyGetSetDef t_PythonFieldStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, self),
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonFieldStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldStaticTransform)[] = {
        { Py_tp_methods, t_PythonFieldStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonFieldStaticTransform_init_ },
        { Py_tp_getset, t_PythonFieldStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldStaticTransform, t_PythonFieldStaticTransform, PythonFieldStaticTransform);
      PyObject *t_PythonFieldStaticTransform::wrap_Object(const PythonFieldStaticTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldStaticTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldStaticTransform), &PY_TYPE_DEF(PythonFieldStaticTransform), module, "PythonFieldStaticTransform", 1);
      }

      void t_PythonFieldStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "class_", make_descriptor(PythonFieldStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "wrapfn_", make_descriptor(t_PythonFieldStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonFieldStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;", (void *) t_PythonFieldStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonFieldStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonFieldStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonFieldStaticTransform::wrap_Object(PythonFieldStaticTransform(((t_PythonFieldStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonFieldStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldStaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldStaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
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

      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data)
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
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *RadiationSensitive::class$ = NULL;
        jmethodID *RadiationSensitive::mids$ = NULL;
        bool RadiationSensitive::live$ = false;
        ::java::lang::String *RadiationSensitive::ABSORPTION_COEFFICIENT = NULL;
        ::java::lang::String *RadiationSensitive::GLOBAL_RADIATION_FACTOR = NULL;
        ::java::lang::String *RadiationSensitive::REFLECTION_COEFFICIENT = NULL;

        jclass RadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/RadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getRadiationParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_397d87bcad93c626] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABSORPTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ABSORPTION_COEFFICIENT", "Ljava/lang/String;"));
            GLOBAL_RADIATION_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "GLOBAL_RADIATION_FACTOR", "Ljava/lang/String;"));
            REFLECTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "REFLECTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List RadiationSensitive::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_a6156df500549a58]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_397d87bcad93c626], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self);
        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args);
        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data);
        static PyGetSetDef t_RadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_RadiationSensitive, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_RadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_RadiationSensitive, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RadiationSensitive)[] = {
          { Py_tp_methods, t_RadiationSensitive__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RadiationSensitive, t_RadiationSensitive, RadiationSensitive);

        void t_RadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(RadiationSensitive), &PY_TYPE_DEF(RadiationSensitive), module, "RadiationSensitive", 0);
        }

        void t_RadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "class_", make_descriptor(RadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "wrapfn_", make_descriptor(t_RadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "boxfn_", make_descriptor(boxObject));
          env->getClass(RadiationSensitive::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "ABSORPTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::ABSORPTION_COEFFICIENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "GLOBAL_RADIATION_FACTOR", make_descriptor(j2p(*RadiationSensitive::GLOBAL_RADIATION_FACTOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "REFLECTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::REFLECTION_COEFFICIENT)));
        }

        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_RadiationSensitive::wrap_Object(RadiationSensitive(((t_RadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GPSBlockIIF.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIF::class$ = NULL;
        jmethodID *GPSBlockIIF::mids$ = NULL;
        bool GPSBlockIIF::live$ = false;
        jdouble GPSBlockIIF::DEFAULT_YAW_BIAS = (jdouble) 0;
        jdouble GPSBlockIIF::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass GPSBlockIIF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3c437373602d18db] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_89a7d6ae4e1f14a2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_70e28bc10c6688c2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIF::GPSBlockIIF(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_3c437373602d18db, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}
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
      namespace attitude {
        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GPSBlockIIF__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIF, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIF)[] = {
          { Py_tp_methods, t_GPSBlockIIF__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIF_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIF)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIF, t_GPSBlockIIF, GPSBlockIIF);

        void t_GPSBlockIIF::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIF), &PY_TYPE_DEF(GPSBlockIIF), module, "GPSBlockIIF", 0);
        }

        void t_GPSBlockIIF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "class_", make_descriptor(GPSBlockIIF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "wrapfn_", make_descriptor(t_GPSBlockIIF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIF::DEFAULT_YAW_BIAS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_RATE", make_descriptor(GPSBlockIIF::DEFAULT_YAW_RATE));
        }

        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIF::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIF::wrap_Object(GPSBlockIIF(((t_GPSBlockIIF *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIF object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIF(a0, a1, a2, a3, a4, a5));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PropulsionModel::class$ = NULL;
          jmethodID *PropulsionModel::mids$ = NULL;
          bool PropulsionModel::live$ = false;

          jclass PropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_be3781a72bd4ba13] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getAcceleration_64acd703c3b3c863] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getMassDerivatives_4368a5d862927c08] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_79518d097c897d26] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_be3781a72bd4ba13], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_64acd703c3b3c863], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::forces::maneuvers::Control3DVectorCostType PropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0]));
          }

          ::java::util::stream::Stream PropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
          }

          ::java::util::stream::Stream PropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
          }

          jdouble PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_4368a5d862927c08], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_79518d097c897d26], a0.this$, a1.this$));
          }

          ::java::lang::String PropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          void PropulsionModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
          }

          void PropulsionModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg);
          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data);
          static PyGetSetDef t_PropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_PropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_PropulsionModel, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_PropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PropulsionModel)[] = {
            { Py_tp_methods, t_PropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(PropulsionModel, t_PropulsionModel, PropulsionModel);

          void t_PropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PropulsionModel), &PY_TYPE_DEF(PropulsionModel), module, "PropulsionModel", 0);
          }

          void t_PropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "class_", make_descriptor(PropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "wrapfn_", make_descriptor(t_PropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PropulsionModel::wrap_Object(PropulsionModel(((t_PropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAcceleration", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getMassDerivatives", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Minus.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Minus::class$ = NULL;
        jmethodID *Minus::mids$ = NULL;
        bool Minus::live$ = false;

        jclass Minus::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Minus");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Minus::Minus() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Minus::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Minus::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Minus_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Minus_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Minus_init_(t_Minus *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Minus_value(t_Minus *self, PyObject *args);

        static PyMethodDef t_Minus__methods_[] = {
          DECLARE_METHOD(t_Minus, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Minus, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Minus, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Minus)[] = {
          { Py_tp_methods, t_Minus__methods_ },
          { Py_tp_init, (void *) t_Minus_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Minus)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Minus, t_Minus, Minus);

        void t_Minus::install(PyObject *module)
        {
          installType(&PY_TYPE(Minus), &PY_TYPE_DEF(Minus), module, "Minus", 0);
        }

        void t_Minus::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "class_", make_descriptor(Minus::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "wrapfn_", make_descriptor(t_Minus::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Minus_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Minus::initializeClass, 1)))
            return NULL;
          return t_Minus::wrap_Object(Minus(((t_Minus *) arg)->object.this$));
        }
        static PyObject *t_Minus_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Minus::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Minus_init_(t_Minus *self, PyObject *args, PyObject *kwds)
        {
          Minus object((jobject) NULL);

          INT_CALL(object = Minus());
          self->object = object;

          return 0;
        }

        static PyObject *t_Minus_value(t_Minus *self, PyObject *args)
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

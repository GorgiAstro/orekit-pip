#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlTokenBuilder::class$ = NULL;
            jmethodID *XmlTokenBuilder::mids$ = NULL;
            bool XmlTokenBuilder::live$ = false;

            jclass XmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_buildTokens_2c588550a962bd9d] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::List XmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_2c588550a962bd9d], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
          namespace lexical {
            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_XmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_XmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlTokenBuilder)[] = {
              { Py_tp_methods, t_XmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlTokenBuilder, t_XmlTokenBuilder, XmlTokenBuilder);

            void t_XmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlTokenBuilder), &PY_TYPE_DEF(XmlTokenBuilder), module, "XmlTokenBuilder", 0);
            }

            void t_XmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "class_", make_descriptor(XmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "wrapfn_", make_descriptor(t_XmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_XmlTokenBuilder::wrap_Object(XmlTokenBuilder(((t_XmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/Station.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Station::class$ = NULL;
        jmethodID *Station::mids$ = NULL;
        bool Station::live$ = false;

        jclass Station::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Station");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAntennaTypeValidAfter_69175f44c4278084] = env->getMethodID(cls, "addAntennaTypeValidAfter", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAntennaTypeValidBefore_69175f44c4278084] = env->getMethodID(cls, "addAntennaTypeValidBefore", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidAfter_a8075f582763156e] = env->getMethodID(cls, "addStationEccentricitiesValidAfter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidBefore_a8075f582763156e] = env->getMethodID(cls, "addStationEccentricitiesValidBefore", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getAntennaType_5b3583dbfd578a63] = env->getMethodID(cls, "getAntennaType", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
            mids$[mid_getAntennaTypeTimeSpanMap_2f46b86c016957a0] = env->getMethodID(cls, "getAntennaTypeTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getDomes_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDomes", "()Ljava/lang/String;");
            mids$[mid_getEccRefSystem_36b40b7b0806d684] = env->getMethodID(cls, "getEccRefSystem", "()Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getEccentricities_082e6346b274f880] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getEccentricitiesTimeSpanMap_2f46b86c016957a0] = env->getMethodID(cls, "getEccentricitiesTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getSiteCode_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_getValidFrom_c325492395d89b24] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_c325492395d89b24] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getVelocity_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_setDomes_734b91ac30d5f9b4] = env->getMethodID(cls, "setDomes", "(Ljava/lang/String;)V");
            mids$[mid_setEccRefSystem_50e96aa7b370b203] = env->getMethodID(cls, "setEccRefSystem", "(Lorg/orekit/files/sinex/Station$ReferenceSystem;)V");
            mids$[mid_setEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setPosition_1844f891addbac57] = env->getMethodID(cls, "setPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_setSiteCode_734b91ac30d5f9b4] = env->getMethodID(cls, "setSiteCode", "(Ljava/lang/String;)V");
            mids$[mid_setValidFrom_02135a6ef25adb4b] = env->getMethodID(cls, "setValidFrom", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setValidUntil_02135a6ef25adb4b] = env->getMethodID(cls, "setValidUntil", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setVelocity_1844f891addbac57] = env->getMethodID(cls, "setVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Station::Station() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void Station::addAntennaTypeValidAfter(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidAfter_69175f44c4278084], a0.this$, a1.this$);
        }

        void Station::addAntennaTypeValidBefore(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidBefore_69175f44c4278084], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidAfter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidAfter_a8075f582763156e], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidBefore(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidBefore_a8075f582763156e], a0.this$, a1.this$);
        }

        ::java::lang::String Station::getAntennaType(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_5b3583dbfd578a63], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getAntennaTypeTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getAntennaTypeTimeSpanMap_2f46b86c016957a0]));
        }

        ::java::lang::String Station::getDomes() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDomes_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::files::sinex::Station$ReferenceSystem Station::getEccRefSystem() const
        {
          return ::org::orekit::files::sinex::Station$ReferenceSystem(env->callObjectMethod(this$, mids$[mid_getEccRefSystem_36b40b7b0806d684]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getEccentricities(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_082e6346b274f880], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getEccentricitiesTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getEccentricitiesTimeSpanMap_2f46b86c016957a0]));
        }

        ::org::orekit::time::AbsoluteDate Station::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8b724f8b4fdad1a2]));
        }

        ::java::lang::String Station::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_c325492395d89b24]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_8b724f8b4fdad1a2]));
        }

        void Station::setDomes(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDomes_734b91ac30d5f9b4], a0.this$);
        }

        void Station::setEccRefSystem(const ::org::orekit::files::sinex::Station$ReferenceSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEccRefSystem_50e96aa7b370b203], a0.this$);
        }

        void Station::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_02135a6ef25adb4b], a0.this$);
        }

        void Station::setPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosition_1844f891addbac57], a0.this$);
        }

        void Station::setSiteCode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSiteCode_734b91ac30d5f9b4], a0.this$);
        }

        void Station::setValidFrom(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidFrom_02135a6ef25adb4b], a0.this$);
        }

        void Station::setValidUntil(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidUntil_02135a6ef25adb4b], a0.this$);
        }

        void Station::setVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVelocity_1844f891addbac57], a0.this$);
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
      namespace sinex {
        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getDomes(t_Station *self);
        static PyObject *t_Station_getEccRefSystem(t_Station *self);
        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getEpoch(t_Station *self);
        static PyObject *t_Station_getPosition(t_Station *self);
        static PyObject *t_Station_getSiteCode(t_Station *self);
        static PyObject *t_Station_getValidFrom(t_Station *self);
        static PyObject *t_Station_getValidUntil(t_Station *self);
        static PyObject *t_Station_getVelocity(t_Station *self);
        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg);
        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__domes(t_Station *self, void *data);
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data);
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__epoch(t_Station *self, void *data);
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__position(t_Station *self, void *data);
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__siteCode(t_Station *self, void *data);
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validFrom(t_Station *self, void *data);
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validUntil(t_Station *self, void *data);
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__velocity(t_Station *self, void *data);
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data);
        static PyGetSetDef t_Station__fields_[] = {
          DECLARE_GET_FIELD(t_Station, antennaTypeTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, domes),
          DECLARE_GETSET_FIELD(t_Station, eccRefSystem),
          DECLARE_GET_FIELD(t_Station, eccentricitiesTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, epoch),
          DECLARE_GETSET_FIELD(t_Station, position),
          DECLARE_GETSET_FIELD(t_Station, siteCode),
          DECLARE_GETSET_FIELD(t_Station, validFrom),
          DECLARE_GETSET_FIELD(t_Station, validUntil),
          DECLARE_GETSET_FIELD(t_Station, velocity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Station__methods_[] = {
          DECLARE_METHOD(t_Station, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, getAntennaType, METH_O),
          DECLARE_METHOD(t_Station, getAntennaTypeTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getDomes, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccRefSystem, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccentricities, METH_O),
          DECLARE_METHOD(t_Station, getEccentricitiesTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_Station, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_Station, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidUntil, METH_NOARGS),
          DECLARE_METHOD(t_Station, getVelocity, METH_NOARGS),
          DECLARE_METHOD(t_Station, setDomes, METH_O),
          DECLARE_METHOD(t_Station, setEccRefSystem, METH_O),
          DECLARE_METHOD(t_Station, setEpoch, METH_O),
          DECLARE_METHOD(t_Station, setPosition, METH_O),
          DECLARE_METHOD(t_Station, setSiteCode, METH_O),
          DECLARE_METHOD(t_Station, setValidFrom, METH_O),
          DECLARE_METHOD(t_Station, setValidUntil, METH_O),
          DECLARE_METHOD(t_Station, setVelocity, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Station)[] = {
          { Py_tp_methods, t_Station__methods_ },
          { Py_tp_init, (void *) t_Station_init_ },
          { Py_tp_getset, t_Station__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Station)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Station, t_Station, Station);

        void t_Station::install(PyObject *module)
        {
          installType(&PY_TYPE(Station), &PY_TYPE_DEF(Station), module, "Station", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "ReferenceSystem", make_descriptor(&PY_TYPE_DEF(Station$ReferenceSystem)));
        }

        void t_Station::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "class_", make_descriptor(Station::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "wrapfn_", make_descriptor(t_Station::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Station::initializeClass, 1)))
            return NULL;
          return t_Station::wrap_Object(Station(((t_Station *) arg)->object.this$));
        }
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Station::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds)
        {
          Station object((jobject) NULL);

          INT_CALL(object = Station());
          self->object = object;

          return 0;
        }

        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAntennaType(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAntennaType", arg);
          return NULL;
        }

        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_Station_getDomes(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDomes());
          return j2p(result);
        }

        static PyObject *t_Station_getEccRefSystem(t_Station *self)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(result);
        }

        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
        }

        static PyObject *t_Station_getEpoch(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getPosition(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_getSiteCode(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_Station_getValidFrom(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getValidUntil(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getVelocity(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDomes(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDomes", arg);
          return NULL;
        }

        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &a0, &p0, ::org::orekit::files::sinex::t_Station$ReferenceSystem::parameters_))
          {
            OBJ_CALL(self->object.setEccRefSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEccRefSystem", arg);
          return NULL;
        }

        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
          return NULL;
        }

        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setPosition(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosition", arg);
          return NULL;
        }

        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSiteCode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSiteCode", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidFrom(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidFrom", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidUntil(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidUntil", arg);
          return NULL;
        }

        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setVelocity(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVelocity", arg);
          return NULL;
        }

        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__domes(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDomes());
          return j2p(value);
        }
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDomes(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "domes", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(value);
        }
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setEccRefSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "eccRefSystem", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__epoch(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epoch", arg);
          return -1;
        }

        static PyObject *t_Station_get__position(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setPosition(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "position", arg);
          return -1;
        }

        static PyObject *t_Station_get__siteCode(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSiteCode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "siteCode", arg);
          return -1;
        }

        static PyObject *t_Station_get__validFrom(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidFrom(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validFrom", arg);
          return -1;
        }

        static PyObject *t_Station_get__validUntil(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidUntil(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validUntil", arg);
          return -1;
        }

        static PyObject *t_Station_get__velocity(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setVelocity(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "velocity", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileInputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/io/IOException.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileInputStream::class$ = NULL;
    jmethodID *FileInputStream::mids$ = NULL;
    bool FileInputStream::live$ = false;

    jclass FileInputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileInputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7e1d51614d5d6a43] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_ce27f4372ce835a9] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_available_55546ef6a647f39b] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_8101a306613a8395] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_read_55546ef6a647f39b] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_53324f422c2c7f64] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_296dd75c373e2c1d] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_skip_9db63109f74a74fc] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileInputStream::FileInputStream(const ::java::io::File & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_7e1d51614d5d6a43, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::io::FileDescriptor & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_ce27f4372ce835a9, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::lang::String & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    jint FileInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_55546ef6a647f39b]);
    }

    void FileInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    ::java::io::FileDescriptor FileInputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_8101a306613a8395]));
    }

    jint FileInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_55546ef6a647f39b]);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_53324f422c2c7f64], a0.this$);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_296dd75c373e2c1d], a0.this$, a1, a2);
    }

    jlong FileInputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_9db63109f74a74fc], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self);
    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data);
    static PyGetSetDef t_FileInputStream__fields_[] = {
      DECLARE_GET_FIELD(t_FileInputStream, fD),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FileInputStream__methods_[] = {
      DECLARE_METHOD(t_FileInputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, available, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, getFD, METH_NOARGS),
      DECLARE_METHOD(t_FileInputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileInputStream)[] = {
      { Py_tp_methods, t_FileInputStream__methods_ },
      { Py_tp_init, (void *) t_FileInputStream_init_ },
      { Py_tp_getset, t_FileInputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileInputStream)[] = {
      &PY_TYPE_DEF(::java::io::InputStream),
      NULL
    };

    DEFINE_TYPE(FileInputStream, t_FileInputStream, FileInputStream);

    void t_FileInputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FileInputStream), &PY_TYPE_DEF(FileInputStream), module, "FileInputStream", 0);
    }

    void t_FileInputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "class_", make_descriptor(FileInputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "wrapfn_", make_descriptor(t_FileInputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileInputStream::initializeClass, 1)))
        return NULL;
      return t_FileInputStream::wrap_Object(FileInputStream(((t_FileInputStream *) arg)->object.this$));
    }
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileInputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::FileDescriptor a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileInputStream(a0));
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

    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.available());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "available", args, 2);
    }

    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self)
    {
      ::java::io::FileDescriptor result((jobject) NULL);
      OBJ_CALL(result = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(result);
    }

    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "skip", args, 2);
    }

    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data)
    {
      ::java::io::FileDescriptor value((jobject) NULL);
      OBJ_CALL(value = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodLaplace.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodLaplace::class$ = NULL;
        jmethodID *IodLaplace::mids$ = NULL;
        bool IodLaplace::live$ = false;

        jclass IodLaplace::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodLaplace");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_14e3a21de9c1f0bf] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_2c2b31d5e422b743] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_9b736fa65cce9916] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLaplace::IodLaplace(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_14e3a21de9c1f0bf], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_2c2b31d5e422b743], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_9b736fa65cce9916], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
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
      namespace iod {
        static PyObject *t_IodLaplace_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodLaplace_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodLaplace_init_(t_IodLaplace *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodLaplace_estimate(t_IodLaplace *self, PyObject *args);

        static PyMethodDef t_IodLaplace__methods_[] = {
          DECLARE_METHOD(t_IodLaplace, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLaplace, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLaplace, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodLaplace)[] = {
          { Py_tp_methods, t_IodLaplace__methods_ },
          { Py_tp_init, (void *) t_IodLaplace_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodLaplace)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodLaplace, t_IodLaplace, IodLaplace);

        void t_IodLaplace::install(PyObject *module)
        {
          installType(&PY_TYPE(IodLaplace), &PY_TYPE_DEF(IodLaplace), module, "IodLaplace", 0);
        }

        void t_IodLaplace::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "class_", make_descriptor(IodLaplace::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "wrapfn_", make_descriptor(t_IodLaplace::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodLaplace_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodLaplace::initializeClass, 1)))
            return NULL;
          return t_IodLaplace::wrap_Object(IodLaplace(((t_IodLaplace *) arg)->object.this$));
        }
        static PyObject *t_IodLaplace_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodLaplace::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodLaplace_init_(t_IodLaplace *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodLaplace object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodLaplace(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodLaplace_estimate(t_IodLaplace *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/CompositeDataContext.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *CompositeDataContext::class$ = NULL;
      jmethodID *CompositeDataContext::mids$ = NULL;
      bool CompositeDataContext::live$ = false;

      jclass CompositeDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/CompositeDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ca20a72c7a06a48a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frames;Lorg/orekit/bodies/CelestialBodies;Lorg/orekit/forces/gravity/potential/GravityFields;Lorg/orekit/models/earth/GeoMagneticFields;)V");
          mids$[mid_getCelestialBodies_379576bb08948576] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_19f184be91611afc] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_78e2356802c487c4] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_045bd2a3a054f1f1] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_d1a571f8b033e2d3] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CompositeDataContext::CompositeDataContext(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::frames::Frames & a1, const ::org::orekit::bodies::CelestialBodies & a2, const ::org::orekit::forces::gravity::potential::GravityFields & a3, const ::org::orekit::models::earth::GeoMagneticFields & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ca20a72c7a06a48a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::bodies::CelestialBodies CompositeDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_379576bb08948576]));
      }

      ::org::orekit::frames::Frames CompositeDataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_19f184be91611afc]));
      }

      ::org::orekit::models::earth::GeoMagneticFields CompositeDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_78e2356802c487c4]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields CompositeDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_045bd2a3a054f1f1]));
      }

      ::org::orekit::time::TimeScales CompositeDataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_d1a571f8b033e2d3]));
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
      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data);
      static PyGetSetDef t_CompositeDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_CompositeDataContext, frames),
        DECLARE_GET_FIELD(t_CompositeDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, gravityFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeDataContext__methods_[] = {
        DECLARE_METHOD(t_CompositeDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getTimeScales, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeDataContext)[] = {
        { Py_tp_methods, t_CompositeDataContext__methods_ },
        { Py_tp_init, (void *) t_CompositeDataContext_init_ },
        { Py_tp_getset, t_CompositeDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeDataContext, t_CompositeDataContext, CompositeDataContext);

      void t_CompositeDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeDataContext), &PY_TYPE_DEF(CompositeDataContext), module, "CompositeDataContext", 0);
      }

      void t_CompositeDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "class_", make_descriptor(CompositeDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "wrapfn_", make_descriptor(t_CompositeDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeDataContext::initializeClass, 1)))
          return NULL;
        return t_CompositeDataContext::wrap_Object(CompositeDataContext(((t_CompositeDataContext *) arg)->object.this$));
      }
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::frames::Frames a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBodies a2((jobject) NULL);
        ::org::orekit::forces::gravity::potential::GravityFields a3((jobject) NULL);
        ::org::orekit::models::earth::GeoMagneticFields a4((jobject) NULL);
        CompositeDataContext object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frames::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CompositeDataContext(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultiSatStepHandler::class$ = NULL;
        jmethodID *MultiSatStepHandler::mids$ = NULL;
        bool MultiSatStepHandler::live$ = false;

        jclass MultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_0e7c3032c7c93ed3] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_0e7c3032c7c93ed3] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_0365da66b6e36325] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_0e7c3032c7c93ed3], a0.this$);
        }

        void MultiSatStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_0e7c3032c7c93ed3], a0.this$);
        }

        void MultiSatStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0365da66b6e36325], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args);

        static PyMethodDef t_MultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_MultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, finish, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiSatStepHandler)[] = {
          { Py_tp_methods, t_MultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultiSatStepHandler, t_MultiSatStepHandler, MultiSatStepHandler);

        void t_MultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiSatStepHandler), &PY_TYPE_DEF(MultiSatStepHandler), module, "MultiSatStepHandler", 0);
        }

        void t_MultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "class_", make_descriptor(MultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "wrapfn_", make_descriptor(t_MultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_MultiSatStepHandler::wrap_Object(MultiSatStepHandler(((t_MultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Rint.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Rint::class$ = NULL;
        jmethodID *Rint::mids$ = NULL;
        bool Rint::live$ = false;

        jclass Rint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Rint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Rint::Rint() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Rint::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Rint::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Rint_value(t_Rint *self, PyObject *args);

        static PyMethodDef t_Rint__methods_[] = {
          DECLARE_METHOD(t_Rint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rint)[] = {
          { Py_tp_methods, t_Rint__methods_ },
          { Py_tp_init, (void *) t_Rint_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rint, t_Rint, Rint);

        void t_Rint::install(PyObject *module)
        {
          installType(&PY_TYPE(Rint), &PY_TYPE_DEF(Rint), module, "Rint", 0);
        }

        void t_Rint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "class_", make_descriptor(Rint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "wrapfn_", make_descriptor(t_Rint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rint::initializeClass, 1)))
            return NULL;
          return t_Rint::wrap_Object(Rint(((t_Rint *) arg)->object.this$));
        }
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds)
        {
          Rint object((jobject) NULL);

          INT_CALL(object = Rint());
          self->object = object;

          return 0;
        }

        static PyObject *t_Rint_value(t_Rint *self, PyObject *args)
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
#include "org/hipparchus/fraction/Fraction.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Boolean.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction::class$ = NULL;
      jmethodID *Fraction::mids$ = NULL;
      bool Fraction::live$ = false;
      Fraction *Fraction::FOUR_FIFTHS = NULL;
      Fraction *Fraction::MINUS_ONE = NULL;
      Fraction *Fraction::ONE = NULL;
      Fraction *Fraction::ONE_FIFTH = NULL;
      Fraction *Fraction::ONE_HALF = NULL;
      Fraction *Fraction::ONE_QUARTER = NULL;
      Fraction *Fraction::ONE_THIRD = NULL;
      Fraction *Fraction::THREE_FIFTHS = NULL;
      Fraction *Fraction::THREE_QUARTERS = NULL;
      Fraction *Fraction::TWO = NULL;
      Fraction *Fraction::TWO_FIFTHS = NULL;
      Fraction *Fraction::TWO_QUARTERS = NULL;
      Fraction *Fraction::TWO_THIRDS = NULL;
      Fraction *Fraction::ZERO = NULL;

      jclass Fraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_1af1b4c263b48b0c] = env->getMethodID(cls, "<init>", "(DI)V");
          mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_7ab72bcbb3909669] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_bdfa161ba56577a2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_9b02f5d4b569000c] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_compareTo_3cf36ccb5102bad4] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/Fraction;)I");
          mids$[mid_convergent_65552bd5bd5c77b9] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/Fraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_0df0904681fc943b] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_bdfa161ba56577a2] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_divide_9b02f5d4b569000c] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominator_55546ef6a647f39b] = env->getMethodID(cls, "getDenominator", "()I");
          mids$[mid_getField_1e2decbb84e0a2b6] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getNumerator_55546ef6a647f39b] = env->getMethodID(cls, "getNumerator", "()I");
          mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_45f5e815bd9f47bd] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_9ab94ac1dc23b105] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_bdfa161ba56577a2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_multiply_9b02f5d4b569000c] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_negate_7ab72bcbb3909669] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_percentageValue_b74f83833fdad017] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_reciprocal_7ab72bcbb3909669] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_signum_55546ef6a647f39b] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_bdfa161ba56577a2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_subtract_9b02f5d4b569000c] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new Fraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          MINUS_ONE = new Fraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE = new Fraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_FIFTH = new Fraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_HALF = new Fraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_QUARTER = new Fraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_THIRD = new Fraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_FIFTHS = new Fraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_QUARTERS = new Fraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO = new Fraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_FIFTHS = new Fraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_QUARTERS = new Fraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_THIRDS = new Fraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/Fraction;"));
          ZERO = new Fraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/Fraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Fraction::Fraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      Fraction::Fraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      Fraction::Fraction(jdouble a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_1af1b4c263b48b0c, a0, a1)) {}

      Fraction::Fraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

      Fraction::Fraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

      Fraction Fraction::abs() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_abs_7ab72bcbb3909669]));
      }

      Fraction Fraction::add(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_bdfa161ba56577a2], a0.this$));
      }

      Fraction Fraction::add(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_9b02f5d4b569000c], a0));
      }

      jint Fraction::compareTo(const Fraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_3cf36ccb5102bad4], a0.this$);
      }

      ::org::hipparchus::util::Pair Fraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::Fraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_65552bd5bd5c77b9], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream Fraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_0df0904681fc943b], a0, a1));
      }

      Fraction Fraction::divide(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_bdfa161ba56577a2], a0.this$));
      }

      Fraction Fraction::divide(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_9b02f5d4b569000c], a0));
      }

      jdouble Fraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
      }

      jboolean Fraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jfloat Fraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
      }

      jint Fraction::getDenominator() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominator_55546ef6a647f39b]);
      }

      ::org::hipparchus::fraction::FractionField Fraction::getField() const
      {
        return ::org::hipparchus::fraction::FractionField(env->callObjectMethod(this$, mids$[mid_getField_1e2decbb84e0a2b6]));
      }

      jint Fraction::getNumerator() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumerator_55546ef6a647f39b]);
      }

      jdouble Fraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
      }

      Fraction Fraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Fraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_45f5e815bd9f47bd], a0, a1));
      }

      jint Fraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jint Fraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
      }

      jboolean Fraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_9ab94ac1dc23b105]);
      }

      jlong Fraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
      }

      Fraction Fraction::multiply(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_bdfa161ba56577a2], a0.this$));
      }

      Fraction Fraction::multiply(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_9b02f5d4b569000c], a0));
      }

      Fraction Fraction::negate() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_negate_7ab72bcbb3909669]));
      }

      jdouble Fraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_b74f83833fdad017]);
      }

      Fraction Fraction::reciprocal() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_reciprocal_7ab72bcbb3909669]));
      }

      jint Fraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_55546ef6a647f39b]);
      }

      Fraction Fraction::subtract(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_bdfa161ba56577a2], a0.this$));
      }

      Fraction Fraction::subtract(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_9b02f5d4b569000c], a0));
      }

      ::java::lang::String Fraction::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Fraction_abs(t_Fraction *self);
      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg);
      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_getDenominator(t_Fraction *self);
      static PyObject *t_Fraction_getField(t_Fraction *self);
      static PyObject *t_Fraction_getNumerator(t_Fraction *self);
      static PyObject *t_Fraction_getReal(t_Fraction *self);
      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_isInteger(t_Fraction *self);
      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_negate(t_Fraction *self);
      static PyObject *t_Fraction_percentageValue(t_Fraction *self);
      static PyObject *t_Fraction_reciprocal(t_Fraction *self);
      static PyObject *t_Fraction_signum(t_Fraction *self);
      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data);
      static PyGetSetDef t_Fraction__fields_[] = {
        DECLARE_GET_FIELD(t_Fraction, denominator),
        DECLARE_GET_FIELD(t_Fraction, field),
        DECLARE_GET_FIELD(t_Fraction, integer),
        DECLARE_GET_FIELD(t_Fraction, numerator),
        DECLARE_GET_FIELD(t_Fraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Fraction__methods_[] = {
        DECLARE_METHOD(t_Fraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, add, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, compareTo, METH_O),
        DECLARE_METHOD(t_Fraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, getDenominator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getNumerator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction)[] = {
        { Py_tp_methods, t_Fraction__methods_ },
        { Py_tp_init, (void *) t_Fraction_init_ },
        { Py_tp_getset, t_Fraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Fraction, t_Fraction, Fraction);

      void t_Fraction::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction), &PY_TYPE_DEF(Fraction), module, "Fraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(Fraction$ConvergenceTest)));
      }

      void t_Fraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "class_", make_descriptor(Fraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "wrapfn_", make_descriptor(t_Fraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(Fraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "FOUR_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "MINUS_ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_FIFTH", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_HALF", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_QUARTER", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_THIRD", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_THIRDS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ZERO", make_descriptor(t_Fraction::wrap_Object(*Fraction::ZERO)));
      }

      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction::initializeClass, 1)))
          return NULL;
        return t_Fraction::wrap_Object(Fraction(((t_Fraction *) arg)->object.this$));
      }
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = Fraction(a0, a1, a2));
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

      static PyObject *t_Fraction_abs(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg)
      {
        Fraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::Fraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::Fraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Fraction_getDenominator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getField(t_Fraction *self)
      {
        ::org::hipparchus::fraction::FractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(result);
      }

      static PyObject *t_Fraction_getNumerator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumerator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getReal(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        Fraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::getReducedFraction(a0, a1));
          return t_Fraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Fraction_isInteger(t_Fraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Fraction_negate(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_percentageValue(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_reciprocal(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_signum(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data)
      {
        ::org::hipparchus::fraction::FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(value);
      }

      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumerator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DPOCMethodType::class$ = NULL;
              jmethodID *ShortTermEncounter2DPOCMethodType::mids$ = NULL;
              bool ShortTermEncounter2DPOCMethodType::live$ = false;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFANO_2005 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFRIEND_1999 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFRIEND_1999_MAX = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::CHAN_1997 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::LAAS_2015 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::PATERA_2005 = NULL;

              jclass ShortTermEncounter2DPOCMethodType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getCCSDSType_ba099cb817b72494] = env->getMethodID(cls, "getCCSDSType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
                  mids$[mid_getMethod_0d2e432558f4891e] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod;");
                  mids$[mid_valueOf_4ee2c2c8e56c695d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_values_c9f0559ced279b3b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ALFANO_2005 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFANO_2005", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  ALFRIEND_1999 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  ALFRIEND_1999_MAX = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999_MAX", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  CHAN_1997 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "CHAN_1997", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  LAAS_2015 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "LAAS_2015", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  PATERA_2005 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "PATERA_2005", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::definitions::PocMethodType ShortTermEncounter2DPOCMethodType::getCCSDSType() const
              {
                return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getCCSDSType_ba099cb817b72494]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod ShortTermEncounter2DPOCMethodType::getMethod() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod(env->callObjectMethod(this$, mids$[mid_getMethod_0d2e432558f4891e]));
              }

              ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethodType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShortTermEncounter2DPOCMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4ee2c2c8e56c695d], a0.this$));
              }

              JArray< ShortTermEncounter2DPOCMethodType > ShortTermEncounter2DPOCMethodType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShortTermEncounter2DPOCMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_c9f0559ced279b3b]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_ShortTermEncounter2DPOCMethodType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_of_(t_ShortTermEncounter2DPOCMethodType *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_getCCSDSType(t_ShortTermEncounter2DPOCMethodType *self);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_getMethod(t_ShortTermEncounter2DPOCMethodType *self);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_values(PyTypeObject *type);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__cCSDSType(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__method(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__parameters_(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DPOCMethodType__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, cCSDSType),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, method),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DPOCMethodType__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, getCCSDSType, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DPOCMethodType)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DPOCMethodType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShortTermEncounter2DPOCMethodType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DPOCMethodType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DPOCMethodType, t_ShortTermEncounter2DPOCMethodType, ShortTermEncounter2DPOCMethodType);
              PyObject *t_ShortTermEncounter2DPOCMethodType::wrap_Object(const ShortTermEncounter2DPOCMethodType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShortTermEncounter2DPOCMethodType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShortTermEncounter2DPOCMethodType *self = (t_ShortTermEncounter2DPOCMethodType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ShortTermEncounter2DPOCMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShortTermEncounter2DPOCMethodType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShortTermEncounter2DPOCMethodType *self = (t_ShortTermEncounter2DPOCMethodType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ShortTermEncounter2DPOCMethodType::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DPOCMethodType), &PY_TYPE_DEF(ShortTermEncounter2DPOCMethodType), module, "ShortTermEncounter2DPOCMethodType", 0);
              }

              void t_ShortTermEncounter2DPOCMethodType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "class_", make_descriptor(ShortTermEncounter2DPOCMethodType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "wrapfn_", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShortTermEncounter2DPOCMethodType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFANO_2005", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFANO_2005)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFRIEND_1999", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFRIEND_1999)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFRIEND_1999_MAX", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFRIEND_1999_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "CHAN_1997", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::CHAN_1997)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "LAAS_2015", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::LAAS_2015)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "PATERA_2005", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::PATERA_2005)));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DPOCMethodType::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DPOCMethodType::wrap_Object(ShortTermEncounter2DPOCMethodType(((t_ShortTermEncounter2DPOCMethodType *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DPOCMethodType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DPOCMethodType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_of_(t_ShortTermEncounter2DPOCMethodType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_getCCSDSType(t_ShortTermEncounter2DPOCMethodType *self)
              {
                ::org::orekit::files::ccsds::definitions::PocMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCCSDSType());
                return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_getMethod(t_ShortTermEncounter2DPOCMethodType *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethod::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::valueOf(a0));
                  return t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_values(PyTypeObject *type)
              {
                JArray< ShortTermEncounter2DPOCMethodType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::values());
                return JArray<jobject>(result.this$).wrap(t_ShortTermEncounter2DPOCMethodType::wrap_jobject);
              }
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__parameters_(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__cCSDSType(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::PocMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCCSDSType());
                return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__method(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethod::wrap_Object(value);
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
#include "org/orekit/propagation/events/handlers/PythonEventHandler.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonEventHandler::class$ = NULL;
          jmethodID *PythonEventHandler::mids$ = NULL;
          bool PythonEventHandler::live$ = false;

          jclass PythonEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_ae9b0131fefe6c67] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_0ac7022abb4b9f0c] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_ec159c1171338d74] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEventHandler::PythonEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonEventHandler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      namespace events {
        namespace handlers {
          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self);
          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data);
          static PyGetSetDef t_PythonEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEventHandler, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEventHandler)[] = {
            { Py_tp_methods, t_PythonEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonEventHandler_init_ },
            { Py_tp_getset, t_PythonEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEventHandler, t_PythonEventHandler, PythonEventHandler);

          void t_PythonEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEventHandler), &PY_TYPE_DEF(PythonEventHandler), module, "PythonEventHandler", 1);
          }

          void t_PythonEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "class_", make_descriptor(PythonEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "wrapfn_", make_descriptor(t_PythonEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonEventHandler::wrap_Object(PythonEventHandler(((t_PythonEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonEventHandler object((jobject) NULL);

            INT_CALL(object = PythonEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args)
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

          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
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

          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/NodeDetector.h"
#include "org/orekit/propagation/events/NodeDetector.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NodeDetector::class$ = NULL;
        jmethodID *NodeDetector::mids$ = NULL;
        bool NodeDetector::live$ = false;

        jclass NodeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NodeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_d3dbf4fc80920e87] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_6b314fb0882c34c5] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_2ec15de5a48d92d0] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodeDetector::NodeDetector(const ::org::orekit::frames::Frame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

        NodeDetector::NodeDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d3dbf4fc80920e87, a0.this$, a1.this$)) {}

        NodeDetector::NodeDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6b314fb0882c34c5, a0, a1.this$, a2.this$)) {}

        jdouble NodeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::frames::Frame NodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
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
        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args);
        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args);
        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self);
        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data);
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data);
        static PyGetSetDef t_NodeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NodeDetector, frame),
          DECLARE_GET_FIELD(t_NodeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodeDetector__methods_[] = {
          DECLARE_METHOD(t_NodeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodeDetector)[] = {
          { Py_tp_methods, t_NodeDetector__methods_ },
          { Py_tp_init, (void *) t_NodeDetector_init_ },
          { Py_tp_getset, t_NodeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NodeDetector, t_NodeDetector, NodeDetector);
        PyObject *t_NodeDetector::wrap_Object(const NodeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NodeDetector), &PY_TYPE_DEF(NodeDetector), module, "NodeDetector", 0);
        }

        void t_NodeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "class_", make_descriptor(NodeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "wrapfn_", make_descriptor(t_NodeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodeDetector::initializeClass, 1)))
            return NULL;
          return t_NodeDetector::wrap_Object(NodeDetector(((t_NodeDetector *) arg)->object.this$));
        }
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
              {
                INT_CALL(object = NodeDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NodeDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = NodeDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
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

        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NodeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/GeometricDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *GeometricDistribution::class$ = NULL;
        jmethodID *GeometricDistribution::mids$ = NULL;
        bool GeometricDistribution::live$ = false;

        jclass GeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/GeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_b74f83833fdad017] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_inverseCumulativeProbability_2af4736545087009] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_2afcbc21f4e57ab2] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeometricDistribution::GeometricDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        jdouble GeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble GeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble GeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble GeometricDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_b74f83833fdad017]);
        }

        jint GeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_55546ef6a647f39b]);
        }

        jint GeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_55546ef6a647f39b]);
        }

        jint GeometricDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_2af4736545087009], a0);
        }

        jboolean GeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble GeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble GeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2afcbc21f4e57ab2], a0);
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
      namespace discrete {
        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self);
        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data);
        static PyGetSetDef t_GeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GeometricDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_GeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeometricDistribution)[] = {
          { Py_tp_methods, t_GeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_GeometricDistribution_init_ },
          { Py_tp_getset, t_GeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(GeometricDistribution, t_GeometricDistribution, GeometricDistribution);

        void t_GeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GeometricDistribution), &PY_TYPE_DEF(GeometricDistribution), module, "GeometricDistribution", 0);
        }

        void t_GeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "class_", make_descriptor(GeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "wrapfn_", make_descriptor(t_GeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_GeometricDistribution::wrap_Object(GeometricDistribution(((t_GeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GeometricDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble a0;
          jint result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *ParseException::class$ = NULL;
    jmethodID *ParseException::mids$ = NULL;
    bool ParseException::live$ = false;

    jclass ParseException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/ParseException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_02c6e5855745e0e2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
        mids$[mid_getErrorOffset_55546ef6a647f39b] = env->getMethodID(cls, "getErrorOffset", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParseException::ParseException(const ::java::lang::String & a0, jint a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_02c6e5855745e0e2, a0.this$, a1)) {}

    jint ParseException::getErrorOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorOffset_55546ef6a647f39b]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self);
    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data);
    static PyGetSetDef t_ParseException__fields_[] = {
      DECLARE_GET_FIELD(t_ParseException, errorOffset),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ParseException__methods_[] = {
      DECLARE_METHOD(t_ParseException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, getErrorOffset, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ParseException)[] = {
      { Py_tp_methods, t_ParseException__methods_ },
      { Py_tp_init, (void *) t_ParseException_init_ },
      { Py_tp_getset, t_ParseException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ParseException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(ParseException, t_ParseException, ParseException);

    void t_ParseException::install(PyObject *module)
    {
      installType(&PY_TYPE(ParseException), &PY_TYPE_DEF(ParseException), module, "ParseException", 0);
    }

    void t_ParseException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "class_", make_descriptor(ParseException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "wrapfn_", make_descriptor(t_ParseException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ParseException::initializeClass, 1)))
        return NULL;
      return t_ParseException::wrap_Object(ParseException(((t_ParseException *) arg)->object.this$));
    }
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ParseException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      jint a1;
      ParseException object((jobject) NULL);

      if (!parseArgs(args, "sI", &a0, &a1))
      {
        INT_CALL(object = ParseException(a0, a1));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getErrorOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getErrorOffset());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/SearchInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SearchInterval::class$ = NULL;
        jmethodID *SearchInterval::mids$ = NULL;
        bool SearchInterval::live$ = false;

        jclass SearchInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SearchInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getMax_b74f83833fdad017] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_b74f83833fdad017] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_b74f83833fdad017] = env->getMethodID(cls, "getStartValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SearchInterval::SearchInterval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        SearchInterval::SearchInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble SearchInterval::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_b74f83833fdad017]);
        }

        jdouble SearchInterval::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_b74f83833fdad017]);
        }

        jdouble SearchInterval::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_b74f83833fdad017]);
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
      namespace univariate {
        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self);
        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data);
        static PyGetSetDef t_SearchInterval__fields_[] = {
          DECLARE_GET_FIELD(t_SearchInterval, max),
          DECLARE_GET_FIELD(t_SearchInterval, min),
          DECLARE_GET_FIELD(t_SearchInterval, startValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SearchInterval__methods_[] = {
          DECLARE_METHOD(t_SearchInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, getMax, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getMin, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getStartValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SearchInterval)[] = {
          { Py_tp_methods, t_SearchInterval__methods_ },
          { Py_tp_init, (void *) t_SearchInterval_init_ },
          { Py_tp_getset, t_SearchInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SearchInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SearchInterval, t_SearchInterval, SearchInterval);

        void t_SearchInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(SearchInterval), &PY_TYPE_DEF(SearchInterval), module, "SearchInterval", 0);
        }

        void t_SearchInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "class_", make_descriptor(SearchInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "wrapfn_", make_descriptor(t_SearchInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SearchInterval::initializeClass, 1)))
            return NULL;
          return t_SearchInterval::wrap_Object(SearchInterval(((t_SearchInterval *) arg)->object.this$));
        }
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SearchInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SearchInterval(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = SearchInterval(a0, a1, a2));
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

        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/ContinueOnEvent.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *ContinueOnEvent::class$ = NULL;
          jmethodID *ContinueOnEvent::mids$ = NULL;
          bool ContinueOnEvent::live$ = false;

          jclass ContinueOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/ContinueOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_ae9b0131fefe6c67] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinueOnEvent::ContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::ode::events::Action ContinueOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_ae9b0131fefe6c67], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_ContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ContinueOnEvent_init_(t_ContinueOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ContinueOnEvent_eventOccurred(t_ContinueOnEvent *self, PyObject *args);

          static PyMethodDef t_ContinueOnEvent__methods_[] = {
            DECLARE_METHOD(t_ContinueOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinueOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinueOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContinueOnEvent)[] = {
            { Py_tp_methods, t_ContinueOnEvent__methods_ },
            { Py_tp_init, (void *) t_ContinueOnEvent_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContinueOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ContinueOnEvent, t_ContinueOnEvent, ContinueOnEvent);

          void t_ContinueOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(ContinueOnEvent), &PY_TYPE_DEF(ContinueOnEvent), module, "ContinueOnEvent", 0);
          }

          void t_ContinueOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "class_", make_descriptor(ContinueOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "wrapfn_", make_descriptor(t_ContinueOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContinueOnEvent::initializeClass, 1)))
              return NULL;
            return t_ContinueOnEvent::wrap_Object(ContinueOnEvent(((t_ContinueOnEvent *) arg)->object.this$));
          }
          static PyObject *t_ContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContinueOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ContinueOnEvent_init_(t_ContinueOnEvent *self, PyObject *args, PyObject *kwds)
          {
            ContinueOnEvent object((jobject) NULL);

            INT_CALL(object = ContinueOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_ContinueOnEvent_eventOccurred(t_ContinueOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/VectorFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *VectorFormat::class$ = NULL;
      jmethodID *VectorFormat::mids$ = NULL;
      bool VectorFormat::live$ = false;
      ::java::lang::String *VectorFormat::DEFAULT_PREFIX = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SEPARATOR = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SUFFIX = NULL;

      jclass VectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/VectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_e9d419993c8be639] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;)Ljava/lang/String;");
          mids$[mid_format_4b712c2465e37e54] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_8d2cd0b971cc7b85] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_87ffffc449cd25a5] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getSeparator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_1a4fc7b3db50e8cd] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parse_b176351865ef534b] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parseCoordinates_bc56ec5488ce916c] = env->getMethodID(cls, "parseCoordinates", "(ILjava/lang/String;Ljava/text/ParsePosition;)[D");
          mids$[mid_format_782445f761dc1740] = env->getMethodID(cls, "format", "(Ljava/lang/StringBuffer;Ljava/text/FieldPosition;[D)Ljava/lang/StringBuffer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_PREFIX", "Ljava/lang/String;"));
          DEFAULT_SEPARATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SEPARATOR", "Ljava/lang/String;"));
          DEFAULT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUFFIX", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_e9d419993c8be639], a0.this$));
      }

      ::java::lang::StringBuffer VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_4b712c2465e37e54], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > VectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_8d2cd0b971cc7b85]));
      }

      ::java::text::NumberFormat VectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_87ffffc449cd25a5]));
      }

      ::java::lang::String VectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String VectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String VectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_1a4fc7b3db50e8cd], a0.this$));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_b176351865ef534b], a0.this$, a1.this$));
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
      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data);
      static PyGetSetDef t_VectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_VectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_VectorFormat, prefix),
        DECLARE_GET_FIELD(t_VectorFormat, separator),
        DECLARE_GET_FIELD(t_VectorFormat, suffix),
        DECLARE_GET_FIELD(t_VectorFormat, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VectorFormat__methods_[] = {
        DECLARE_METHOD(t_VectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, of_, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VectorFormat)[] = {
        { Py_tp_methods, t_VectorFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_VectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(VectorFormat, t_VectorFormat, VectorFormat);
      PyObject *t_VectorFormat::wrap_Object(const VectorFormat& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_VectorFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_VectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(VectorFormat), &PY_TYPE_DEF(VectorFormat), module, "VectorFormat", 0);
      }

      void t_VectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "class_", make_descriptor(VectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "wrapfn_", make_descriptor(t_VectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "boxfn_", make_descriptor(boxObject));
        env->getClass(VectorFormat::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_PREFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_PREFIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SEPARATOR", make_descriptor(j2p(*VectorFormat::DEFAULT_SEPARATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SUFFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_SUFFIX)));
      }

      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VectorFormat::initializeClass, 1)))
          return NULL;
        return t_VectorFormat::wrap_Object(VectorFormat(((t_VectorFormat *) arg)->object.this$));
      }
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::VectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
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
            namespace opm {

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_IGNITION = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_56ca7e53593c39f0] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;)Z");
                  mids$[mid_valueOf_90a3654f18978779] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");
                  mids$[mid_values_343d29f5db3ecaf3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_1", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_2", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_3", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_EPOCH_IGNITION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_IGNITION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_56ca7e53593c39f0], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_90a3654f18978779], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_343d29f5db3ecaf3]));
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
            namespace opm {
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_IGNITION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_IGNITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
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
#include "org/orekit/models/earth/troposphere/PythonMappingFunction.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonMappingFunction::class$ = NULL;
          jmethodID *PythonMappingFunction::mids$ = NULL;
          bool PythonMappingFunction::live$ = false;

          jclass PythonMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactors_6e118a7a5998051c] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6dcded9cb7dee3c2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMappingFunction::PythonMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonMappingFunction::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        namespace troposphere {
          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self);
          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data);
          static PyGetSetDef t_PythonMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMappingFunction)[] = {
            { Py_tp_methods, t_PythonMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonMappingFunction_init_ },
            { Py_tp_getset, t_PythonMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMappingFunction, t_PythonMappingFunction, PythonMappingFunction);

          void t_PythonMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMappingFunction), &PY_TYPE_DEF(PythonMappingFunction), module, "PythonMappingFunction", 1);
          }

          void t_PythonMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "class_", make_descriptor(PythonMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "wrapfn_", make_descriptor(t_PythonMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonMappingFunction_mappingFactors0 },
              { "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonMappingFunction_mappingFactors1 },
              { "pythonDecRef", "()V", (void *) t_PythonMappingFunction_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonMappingFunction::wrap_Object(PythonMappingFunction(((t_PythonMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args)
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "dOO", (double) a0, o1, o2);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("mappingFactors", result);
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactors", result);
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

          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *AngleType::class$ = NULL;
            jmethodID *AngleType::mids$ = NULL;
            bool AngleType::live$ = false;
            AngleType *AngleType::AZEL = NULL;
            AngleType *AngleType::RADEC = NULL;
            AngleType *AngleType::XEYN = NULL;
            AngleType *AngleType::XSYE = NULL;

            jclass AngleType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/AngleType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_a7c7cd73878b4ee4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_values_913f00c83a5d1f87] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                AZEL = new AngleType(env->getStaticObjectField(cls, "AZEL", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                RADEC = new AngleType(env->getStaticObjectField(cls, "RADEC", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XEYN = new AngleType(env->getStaticObjectField(cls, "XEYN", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XSYE = new AngleType(env->getStaticObjectField(cls, "XSYE", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AngleType AngleType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a7c7cd73878b4ee4], a0.this$));
            }

            JArray< AngleType > AngleType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_913f00c83a5d1f87]));
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
            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args);
            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AngleType_values(PyTypeObject *type);
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data);
            static PyGetSetDef t_AngleType__fields_[] = {
              DECLARE_GET_FIELD(t_AngleType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AngleType__methods_[] = {
              DECLARE_METHOD(t_AngleType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AngleType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AngleType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AngleType)[] = {
              { Py_tp_methods, t_AngleType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AngleType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AngleType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AngleType, t_AngleType, AngleType);
            PyObject *t_AngleType::wrap_Object(const AngleType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AngleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AngleType::install(PyObject *module)
            {
              installType(&PY_TYPE(AngleType), &PY_TYPE_DEF(AngleType), module, "AngleType", 0);
            }

            void t_AngleType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "class_", make_descriptor(AngleType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "wrapfn_", make_descriptor(t_AngleType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AngleType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "AZEL", make_descriptor(t_AngleType::wrap_Object(*AngleType::AZEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "RADEC", make_descriptor(t_AngleType::wrap_Object(*AngleType::RADEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XEYN", make_descriptor(t_AngleType::wrap_Object(*AngleType::XEYN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XSYE", make_descriptor(t_AngleType::wrap_Object(*AngleType::XSYE)));
            }

            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AngleType::initializeClass, 1)))
                return NULL;
              return t_AngleType::wrap_Object(AngleType(((t_AngleType *) arg)->object.this$));
            }
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AngleType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AngleType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::valueOf(a0));
                return t_AngleType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AngleType_values(PyTypeObject *type)
            {
              JArray< AngleType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::values());
              return JArray<jobject>(result.this$).wrap(t_AngleType::wrap_jobject);
            }
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data)
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
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *HaloXZPlaneCrossingDetector::class$ = NULL;
        jmethodID *HaloXZPlaneCrossingDetector::mids$ = NULL;
        bool HaloXZPlaneCrossingDetector::live$ = false;

        jclass HaloXZPlaneCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/HaloXZPlaneCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_b260a96814d5039d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/HaloXZPlaneCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HaloXZPlaneCrossingDetector::HaloXZPlaneCrossingDetector(jdouble a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble HaloXZPlaneCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
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
        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data);
        static PyGetSetDef t_HaloXZPlaneCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_HaloXZPlaneCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HaloXZPlaneCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HaloXZPlaneCrossingDetector)[] = {
          { Py_tp_methods, t_HaloXZPlaneCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_HaloXZPlaneCrossingDetector_init_ },
          { Py_tp_getset, t_HaloXZPlaneCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HaloXZPlaneCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(HaloXZPlaneCrossingDetector, t_HaloXZPlaneCrossingDetector, HaloXZPlaneCrossingDetector);
        PyObject *t_HaloXZPlaneCrossingDetector::wrap_Object(const HaloXZPlaneCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HaloXZPlaneCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HaloXZPlaneCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(HaloXZPlaneCrossingDetector), &PY_TYPE_DEF(HaloXZPlaneCrossingDetector), module, "HaloXZPlaneCrossingDetector", 0);
        }

        void t_HaloXZPlaneCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "class_", make_descriptor(HaloXZPlaneCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "wrapfn_", make_descriptor(t_HaloXZPlaneCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_HaloXZPlaneCrossingDetector::wrap_Object(HaloXZPlaneCrossingDetector(((t_HaloXZPlaneCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          HaloXZPlaneCrossingDetector object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = HaloXZPlaneCrossingDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(HaloXZPlaneCrossingDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HaloXZPlaneCrossingDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SecondMoment::class$ = NULL;
          jmethodID *SecondMoment::mids$ = NULL;
          bool SecondMoment::live$ = false;

          jclass SecondMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SecondMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_b3f951b64db17420] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_ae4c271bec5aae13] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SecondMoment;");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SecondMoment::SecondMoment() : ::org::hipparchus::stat::descriptive::moment::FirstMoment(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void SecondMoment::aggregate(const SecondMoment & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_b3f951b64db17420], a0.this$);
          }

          void SecondMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          SecondMoment SecondMoment::copy() const
          {
            return SecondMoment(env->callObjectMethod(this$, mids$[mid_copy_ae4c271bec5aae13]));
          }

          jdouble SecondMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void SecondMoment::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg);
          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data);
          static PyGetSetDef t_SecondMoment__fields_[] = {
            DECLARE_GET_FIELD(t_SecondMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SecondMoment__methods_[] = {
            DECLARE_METHOD(t_SecondMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, aggregate, METH_O),
            DECLARE_METHOD(t_SecondMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SecondMoment)[] = {
            { Py_tp_methods, t_SecondMoment__methods_ },
            { Py_tp_init, (void *) t_SecondMoment_init_ },
            { Py_tp_getset, t_SecondMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SecondMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::moment::FirstMoment),
            NULL
          };

          DEFINE_TYPE(SecondMoment, t_SecondMoment, SecondMoment);

          void t_SecondMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(SecondMoment), &PY_TYPE_DEF(SecondMoment), module, "SecondMoment", 0);
          }

          void t_SecondMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "class_", make_descriptor(SecondMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "wrapfn_", make_descriptor(t_SecondMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SecondMoment::initializeClass, 1)))
              return NULL;
            return t_SecondMoment::wrap_Object(SecondMoment(((t_SecondMoment *) arg)->object.this$));
          }
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SecondMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds)
          {
            SecondMoment object((jobject) NULL);

            INT_CALL(object = SecondMoment());
            self->object = object;

            return 0;
          }

          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg)
          {
            SecondMoment a0((jobject) NULL);

            if (!parseArg(arg, "k", SecondMoment::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args)
          {
            SecondMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SecondMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectors::class$ = NULL;
          jmethodID *CycleSlipDetectors::mids$ = NULL;
          bool CycleSlipDetectors::live$ = false;

          jclass CycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_d1fc3c05f458e1a3] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List CycleSlipDetectors::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_d1fc3c05f458e1a3], a0.this$));
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
          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg);

          static PyMethodDef t_CycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectors)[] = {
            { Py_tp_methods, t_CycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectors, t_CycleSlipDetectors, CycleSlipDetectors);

          void t_CycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectors), &PY_TYPE_DEF(CycleSlipDetectors), module, "CycleSlipDetectors", 0);
          }

          void t_CycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "class_", make_descriptor(CycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "wrapfn_", make_descriptor(t_CycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectors::wrap_Object(CycleSlipDetectors(((t_CycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD.h"
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD::class$ = NULL;
        jmethodID *CRD::mids$ = NULL;
        bool CRD::live$ = false;
        ::java::lang::String *CRD::STR_NAN = NULL;
        ::java::lang::String *CRD::STR_VALUE_NOT_AVAILABLE = NULL;

        jclass CRD::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDataBlock_6ef04013095a0c71] = env->getMethodID(cls, "addDataBlock", "(Lorg/orekit/files/ilrs/CRD$CRDDataBlock;)V");
            mids$[mid_formatIntegerOrNaN_e91e53c42d39aef9] = env->getStaticMethodID(cls, "formatIntegerOrNaN", "(II)Ljava/lang/String;");
            mids$[mid_getComments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getDataBlocks_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDataBlocks", "()Ljava/util/List;");
            mids$[mid_handleNaN_6f0f3576df9f75ee] = env->getStaticMethodID(cls, "handleNaN", "(Ljava/lang/String;)Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STR_NAN = new ::java::lang::String(env->getStaticObjectField(cls, "STR_NAN", "Ljava/lang/String;"));
            STR_VALUE_NOT_AVAILABLE = new ::java::lang::String(env->getStaticObjectField(cls, "STR_VALUE_NOT_AVAILABLE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD::CRD() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void CRD::addDataBlock(const ::org::orekit::files::ilrs::CRD$CRDDataBlock & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addDataBlock_6ef04013095a0c71], a0.this$);
        }

        ::java::lang::String CRD::formatIntegerOrNaN(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatIntegerOrNaN_e91e53c42d39aef9], a0, a1));
        }

        ::java::util::List CRD::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_e62d3bb06d56d7e3]));
        }

        ::java::util::List CRD::getDataBlocks() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataBlocks_e62d3bb06d56d7e3]));
        }

        ::java::lang::String CRD::handleNaN(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_handleNaN_6f0f3576df9f75ee], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg);
        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRD_getComments(t_CRD *self);
        static PyObject *t_CRD_getDataBlocks(t_CRD *self);
        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_get__comments(t_CRD *self, void *data);
        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data);
        static PyGetSetDef t_CRD__fields_[] = {
          DECLARE_GET_FIELD(t_CRD, comments),
          DECLARE_GET_FIELD(t_CRD, dataBlocks),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD__methods_[] = {
          DECLARE_METHOD(t_CRD, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, addDataBlock, METH_O),
          DECLARE_METHOD(t_CRD, formatIntegerOrNaN, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRD, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CRD, getDataBlocks, METH_NOARGS),
          DECLARE_METHOD(t_CRD, handleNaN, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD)[] = {
          { Py_tp_methods, t_CRD__methods_ },
          { Py_tp_init, (void *) t_CRD_init_ },
          { Py_tp_getset, t_CRD__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD, t_CRD, CRD);

        void t_CRD::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD), &PY_TYPE_DEF(CRD), module, "CRD", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "SessionStatistics", make_descriptor(&PY_TYPE_DEF(CRD$SessionStatistics)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CalibrationDetail", make_descriptor(&PY_TYPE_DEF(CRD$CalibrationDetail)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Calibration", make_descriptor(&PY_TYPE_DEF(CRD$Calibration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Meteo", make_descriptor(&PY_TYPE_DEF(CRD$Meteo)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "AnglesMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$AnglesMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "MeteorologicalMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$MeteorologicalMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeSupplement", make_descriptor(&PY_TYPE_DEF(CRD$RangeSupplement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "NptRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$NptRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "FrRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$FrRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$RangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CRDDataBlock", make_descriptor(&PY_TYPE_DEF(CRD$CRDDataBlock)));
        }

        void t_CRD::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "class_", make_descriptor(CRD::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "wrapfn_", make_descriptor(t_CRD::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRD::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_NAN", make_descriptor(j2p(*CRD::STR_NAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_VALUE_NOT_AVAILABLE", make_descriptor(j2p(*CRD::STR_VALUE_NOT_AVAILABLE)));
        }

        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD::initializeClass, 1)))
            return NULL;
          return t_CRD::wrap_Object(CRD(((t_CRD *) arg)->object.this$));
        }
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds)
        {
          CRD object((jobject) NULL);

          INT_CALL(object = CRD());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CRDDataBlock a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CRDDataBlock::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addDataBlock(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDataBlock", arg);
          return NULL;
        }

        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::formatIntegerOrNaN(a0, a1));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "formatIntegerOrNaN", args);
          return NULL;
        }

        static PyObject *t_CRD_getComments(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRD_getDataBlocks(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CRDDataBlock));
        }

        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::handleNaN(a0));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "handleNaN", arg);
          return NULL;
        }

        static PyObject *t_CRD_get__comments(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader$EphemerisType::class$ = NULL;
      jmethodID *JPLEphemeridesLoader$EphemerisType::mids$ = NULL;
      bool JPLEphemeridesLoader$EphemerisType::live$ = false;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::EARTH = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::EARTH_MOON = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::JUPITER = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MARS = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MERCURY = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MOON = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::NEPTUNE = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::PLUTO = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SATURN = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SOLAR_SYSTEM_BARYCENTER = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SUN = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::URANUS = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::VENUS = NULL;

      jclass JPLEphemeridesLoader$EphemerisType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader$EphemerisType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_41a226c97d57c2c1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");
          mids$[mid_values_c0900b331cfbeda7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EARTH = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "EARTH", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          EARTH_MOON = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "EARTH_MOON", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          JUPITER = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "JUPITER", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MARS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MARS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MERCURY = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MERCURY", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MOON = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MOON", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          NEPTUNE = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "NEPTUNE", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          PLUTO = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "PLUTO", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SATURN = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SATURN", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SOLAR_SYSTEM_BARYCENTER = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SUN = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SUN", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          URANUS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "URANUS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          VENUS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "VENUS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JPLEphemeridesLoader$EphemerisType JPLEphemeridesLoader$EphemerisType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JPLEphemeridesLoader$EphemerisType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_41a226c97d57c2c1], a0.this$));
      }

      JArray< JPLEphemeridesLoader$EphemerisType > JPLEphemeridesLoader$EphemerisType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JPLEphemeridesLoader$EphemerisType >(env->callStaticObjectMethod(cls, mids$[mid_values_c0900b331cfbeda7]));
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
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_of_(t_JPLEphemeridesLoader$EphemerisType *self, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_values(PyTypeObject *type);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_get__parameters_(t_JPLEphemeridesLoader$EphemerisType *self, void *data);
      static PyGetSetDef t_JPLEphemeridesLoader$EphemerisType__fields_[] = {
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader$EphemerisType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JPLEphemeridesLoader$EphemerisType__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, of_, METH_VARARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader$EphemerisType)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader$EphemerisType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_JPLEphemeridesLoader$EphemerisType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader$EphemerisType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader$EphemerisType, t_JPLEphemeridesLoader$EphemerisType, JPLEphemeridesLoader$EphemerisType);
      PyObject *t_JPLEphemeridesLoader$EphemerisType::wrap_Object(const JPLEphemeridesLoader$EphemerisType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_JPLEphemeridesLoader$EphemerisType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_JPLEphemeridesLoader$EphemerisType *self = (t_JPLEphemeridesLoader$EphemerisType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_JPLEphemeridesLoader$EphemerisType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_JPLEphemeridesLoader$EphemerisType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_JPLEphemeridesLoader$EphemerisType *self = (t_JPLEphemeridesLoader$EphemerisType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_JPLEphemeridesLoader$EphemerisType::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader$EphemerisType), &PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType), module, "JPLEphemeridesLoader$EphemerisType", 0);
      }

      void t_JPLEphemeridesLoader$EphemerisType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "class_", make_descriptor(JPLEphemeridesLoader$EphemerisType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "boxfn_", make_descriptor(boxObject));
        env->getClass(JPLEphemeridesLoader$EphemerisType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "EARTH", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::EARTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "EARTH_MOON", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::EARTH_MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "JUPITER", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::JUPITER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MARS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MARS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MERCURY", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MERCURY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MOON", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "NEPTUNE", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::NEPTUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "PLUTO", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::PLUTO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SATURN", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SATURN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SOLAR_SYSTEM_BARYCENTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SUN", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SUN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "URANUS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::URANUS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "VENUS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::VENUS)));
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader$EphemerisType::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader$EphemerisType::wrap_Object(JPLEphemeridesLoader$EphemerisType(((t_JPLEphemeridesLoader$EphemerisType *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader$EphemerisType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_of_(t_JPLEphemeridesLoader$EphemerisType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JPLEphemeridesLoader$EphemerisType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::valueOf(a0));
          return t_JPLEphemeridesLoader$EphemerisType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_values(PyTypeObject *type)
      {
        JArray< JPLEphemeridesLoader$EphemerisType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::values());
        return JArray<jobject>(result.this$).wrap(t_JPLEphemeridesLoader$EphemerisType::wrap_jobject);
      }
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_get__parameters_(t_JPLEphemeridesLoader$EphemerisType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MicrosphereProjectionInterpolator::class$ = NULL;
        jmethodID *MicrosphereProjectionInterpolator::mids$ = NULL;
        bool MicrosphereProjectionInterpolator::live$ = false;

        jclass MicrosphereProjectionInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1f018b93f72bba3d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;DZD)V");
            mids$[mid_init$_16456fe8633b1048] = env->getMethodID(cls, "<init>", "(IIDDDDZD)V");
            mids$[mid_interpolate_535a45a20e20bbcf] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(const ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere & a0, jdouble a1, jboolean a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1f018b93f72bba3d, a0.this$, a1, a2, a3)) {}

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jboolean a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_16456fe8633b1048, a0, a1, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::analysis::MultivariateFunction MicrosphereProjectionInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_535a45a20e20bbcf], a0.this$, a1.this$));
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
        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args);

        static PyMethodDef t_MicrosphereProjectionInterpolator__methods_[] = {
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MicrosphereProjectionInterpolator)[] = {
          { Py_tp_methods, t_MicrosphereProjectionInterpolator__methods_ },
          { Py_tp_init, (void *) t_MicrosphereProjectionInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MicrosphereProjectionInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MicrosphereProjectionInterpolator, t_MicrosphereProjectionInterpolator, MicrosphereProjectionInterpolator);

        void t_MicrosphereProjectionInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MicrosphereProjectionInterpolator), &PY_TYPE_DEF(MicrosphereProjectionInterpolator), module, "MicrosphereProjectionInterpolator", 0);
        }

        void t_MicrosphereProjectionInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "class_", make_descriptor(MicrosphereProjectionInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "wrapfn_", make_descriptor(t_MicrosphereProjectionInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 1)))
            return NULL;
          return t_MicrosphereProjectionInterpolator::wrap_Object(MicrosphereProjectionInterpolator(((t_MicrosphereProjectionInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere a0((jobject) NULL);
              jdouble a1;
              jboolean a2;
              jdouble a3;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDZD", ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              jint a0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jboolean a6;
              jdouble a7;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "IIDDDDZD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
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
#include "org/hipparchus/analysis/polynomials/PolynomialsUtils.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialsUtils::class$ = NULL;
        jmethodID *PolynomialsUtils::mids$ = NULL;
        bool PolynomialsUtils::live$ = false;

        jclass PolynomialsUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialsUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createChebyshevPolynomial_4f5b8bf5df9f3665] = env->getStaticMethodID(cls, "createChebyshevPolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createHermitePolynomial_4f5b8bf5df9f3665] = env->getStaticMethodID(cls, "createHermitePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createJacobiPolynomial_8c67abe8da27c9da] = env->getStaticMethodID(cls, "createJacobiPolynomial", "(III)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLaguerrePolynomial_4f5b8bf5df9f3665] = env->getStaticMethodID(cls, "createLaguerrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLegendrePolynomial_4f5b8bf5df9f3665] = env->getStaticMethodID(cls, "createLegendrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_shift_ffc9125fb767957a] = env->getStaticMethodID(cls, "shift", "([DD)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createChebyshevPolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createChebyshevPolynomial_4f5b8bf5df9f3665], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createHermitePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createHermitePolynomial_4f5b8bf5df9f3665], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createJacobiPolynomial(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createJacobiPolynomial_8c67abe8da27c9da], a0, a1, a2));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLaguerrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLaguerrePolynomial_4f5b8bf5df9f3665], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLegendrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLegendrePolynomial_4f5b8bf5df9f3665], a0));
        }

        JArray< jdouble > PolynomialsUtils::shift(const JArray< jdouble > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_shift_ffc9125fb767957a], a0.this$, a1));
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
      namespace polynomials {
        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_PolynomialsUtils__methods_[] = {
          DECLARE_METHOD(t_PolynomialsUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createChebyshevPolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createHermitePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createJacobiPolynomial, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLaguerrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLegendrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, shift, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialsUtils)[] = {
          { Py_tp_methods, t_PolynomialsUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialsUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialsUtils, t_PolynomialsUtils, PolynomialsUtils);

        void t_PolynomialsUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialsUtils), &PY_TYPE_DEF(PolynomialsUtils), module, "PolynomialsUtils", 0);
        }

        void t_PolynomialsUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "class_", make_descriptor(PolynomialsUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "wrapfn_", make_descriptor(t_PolynomialsUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialsUtils::initializeClass, 1)))
            return NULL;
          return t_PolynomialsUtils::wrap_Object(PolynomialsUtils(((t_PolynomialsUtils *) arg)->object.this$));
        }
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialsUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createChebyshevPolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createChebyshevPolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createHermitePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createHermitePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createJacobiPolynomial(a0, a1, a2));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createJacobiPolynomial", args);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLaguerrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLaguerrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLegendrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLegendrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::shift(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError(type, "shift", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "java/util/List.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesReader::class$ = NULL;
          jmethodID *OceanTidesReader::mids$ = NULL;
          bool OceanTidesReader::live$ = false;

          jclass OceanTidesReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canAdd_75f431eefaad4f32] = env->getMethodID(cls, "canAdd", "(II)Z");
              mids$[mid_getMaxParseDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getSupportedNames_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getWaves_e62d3bb06d56d7e3] = env->getMethodID(cls, "getWaves", "()Ljava/util/List;");
              mids$[mid_setMaxParseDegree_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_startParse_734b91ac30d5f9b4] = env->getMethodID(cls, "startParse", "(Ljava/lang/String;)V");
              mids$[mid_addWaveCoefficients_5e9b52046c638255] = env->getMethodID(cls, "addWaveCoefficients", "(IIIDDDDILjava/lang/String;)V");
              mids$[mid_endParse_a1fa5dae97ea5ed2] = env->getMethodID(cls, "endParse", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesReader::OceanTidesReader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          jboolean OceanTidesReader::canAdd(jint a0, jint a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_canAdd_75f431eefaad4f32], a0, a1);
          }

          jint OceanTidesReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_55546ef6a647f39b]);
          }

          jint OceanTidesReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_55546ef6a647f39b]);
          }

          ::java::lang::String OceanTidesReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_1c1fa1e935d6cdcf]));
          }

          ::java::util::List OceanTidesReader::getWaves() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getWaves_e62d3bb06d56d7e3]));
          }

          void OceanTidesReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_44ed599e93e8a30c], a0);
          }

          void OceanTidesReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_44ed599e93e8a30c], a0);
          }

          jboolean OceanTidesReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args);
          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data);
          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data);
          static PyGetSetDef t_OceanTidesReader__fields_[] = {
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseOrder),
            DECLARE_GET_FIELD(t_OceanTidesReader, supportedNames),
            DECLARE_GET_FIELD(t_OceanTidesReader, waves),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesReader__methods_[] = {
            DECLARE_METHOD(t_OceanTidesReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, canAdd, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getWaves, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesReader)[] = {
            { Py_tp_methods, t_OceanTidesReader__methods_ },
            { Py_tp_init, (void *) t_OceanTidesReader_init_ },
            { Py_tp_getset, t_OceanTidesReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesReader, t_OceanTidesReader, OceanTidesReader);

          void t_OceanTidesReader::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesReader), &PY_TYPE_DEF(OceanTidesReader), module, "OceanTidesReader", 0);
          }

          void t_OceanTidesReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "class_", make_descriptor(OceanTidesReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "wrapfn_", make_descriptor(t_OceanTidesReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesReader::initializeClass, 1)))
              return NULL;
            return t_OceanTidesReader::wrap_Object(OceanTidesReader(((t_OceanTidesReader *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanTidesReader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = OceanTidesReader(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.canAdd(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "canAdd", args);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
          }

          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Segment::class$ = NULL;
        jmethodID *SP3Segment::mids$ = NULL;
        bool SP3Segment::live$ = false;

        jclass SP3Segment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Segment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6efaca3d49833f7b] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_9d0708dae53e0ac8] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;)V");
            mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_2d80cda3dc1f1422] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_9e515362e8de0afe] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Segment::SP3Segment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6efaca3d49833f7b, a0, a1.this$, a2, a3.this$)) {}

        void SP3Segment::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_9d0708dae53e0ac8], a0.this$);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Segment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
        }

        ::java::util::List SP3Segment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_e62d3bb06d56d7e3]));
        }

        ::org::orekit::frames::Frame SP3Segment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        jint SP3Segment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
        }

        jdouble SP3Segment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_2d80cda3dc1f1422]));
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_9e515362e8de0afe], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
      namespace sp3 {
        static PyObject *t_SP3Segment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Segment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Segment_init_(t_SP3Segment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Segment_addCoordinate(t_SP3Segment *self, PyObject *arg);
        static PyObject *t_SP3Segment_getAvailableDerivatives(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getCoordinates(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getFrame(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getInterpolationSamples(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getMu(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getPropagator(t_SP3Segment *self, PyObject *args);
        static PyObject *t_SP3Segment_getStart(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getStop(t_SP3Segment *self);
        static PyObject *t_SP3Segment_get__availableDerivatives(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__coordinates(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__frame(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__interpolationSamples(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__mu(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__propagator(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__start(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__stop(t_SP3Segment *self, void *data);
        static PyGetSetDef t_SP3Segment__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Segment, availableDerivatives),
          DECLARE_GET_FIELD(t_SP3Segment, coordinates),
          DECLARE_GET_FIELD(t_SP3Segment, frame),
          DECLARE_GET_FIELD(t_SP3Segment, interpolationSamples),
          DECLARE_GET_FIELD(t_SP3Segment, mu),
          DECLARE_GET_FIELD(t_SP3Segment, propagator),
          DECLARE_GET_FIELD(t_SP3Segment, start),
          DECLARE_GET_FIELD(t_SP3Segment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Segment__methods_[] = {
          DECLARE_METHOD(t_SP3Segment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Segment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Segment, addCoordinate, METH_O),
          DECLARE_METHOD(t_SP3Segment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_SP3Segment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Segment)[] = {
          { Py_tp_methods, t_SP3Segment__methods_ },
          { Py_tp_init, (void *) t_SP3Segment_init_ },
          { Py_tp_getset, t_SP3Segment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Segment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Segment, t_SP3Segment, SP3Segment);

        void t_SP3Segment::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Segment), &PY_TYPE_DEF(SP3Segment), module, "SP3Segment", 0);
        }

        void t_SP3Segment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "class_", make_descriptor(SP3Segment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "wrapfn_", make_descriptor(t_SP3Segment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Segment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Segment::initializeClass, 1)))
            return NULL;
          return t_SP3Segment::wrap_Object(SP3Segment(((t_SP3Segment *) arg)->object.this$));
        }
        static PyObject *t_SP3Segment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Segment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Segment_init_(t_SP3Segment *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          SP3Segment object((jobject) NULL);

          if (!parseArgs(args, "DkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            INT_CALL(object = SP3Segment(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Segment_addCoordinate(t_SP3Segment *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3Coordinate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3Coordinate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCoordinate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCoordinate", arg);
          return NULL;
        }

        static PyObject *t_SP3Segment_getAvailableDerivatives(t_SP3Segment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getCoordinates(t_SP3Segment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(SP3Coordinate));
        }

        static PyObject *t_SP3Segment_getFrame(t_SP3Segment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getInterpolationSamples(t_SP3Segment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Segment_getMu(t_SP3Segment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Segment_getPropagator(t_SP3Segment *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_SP3Segment_getStart(t_SP3Segment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getStop(t_SP3Segment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_get__availableDerivatives(t_SP3Segment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__coordinates(t_SP3Segment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__frame(t_SP3Segment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__interpolationSamples(t_SP3Segment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3Segment_get__mu(t_SP3Segment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Segment_get__propagator(t_SP3Segment *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__start(t_SP3Segment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__stop(t_SP3Segment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/IterativeLinearSolverEvent.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolverEvent::class$ = NULL;
      jmethodID *IterativeLinearSolverEvent::mids$ = NULL;
      bool IterativeLinearSolverEvent::live$ = false;

      jclass IterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1b148ccb530f535f] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getNormOfResidual_b74f83833fdad017] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_3a10cc75bd070d84] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_3a10cc75bd070d84] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_3a10cc75bd070d84] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_9ab94ac1dc23b105] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolverEvent::IterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1) : ::org::hipparchus::util::IterationEvent(env->newObject(initializeClass, &mids$, mid_init$_1b148ccb530f535f, a0.this$, a1)) {}

      jdouble IterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_b74f83833fdad017]);
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_3a10cc75bd070d84]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_3a10cc75bd070d84]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_3a10cc75bd070d84]));
      }

      jboolean IterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_9ab94ac1dc23b105]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_IterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getNormOfResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getRightHandSideVector, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getSolution, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, providesResidual, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_IterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_IterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::IterationEvent),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolverEvent, t_IterativeLinearSolverEvent, IterativeLinearSolverEvent);

      void t_IterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolverEvent), &PY_TYPE_DEF(IterativeLinearSolverEvent), module, "IterativeLinearSolverEvent", 0);
      }

      void t_IterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "class_", make_descriptor(IterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_IterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolverEvent::wrap_Object(IterativeLinearSolverEvent(((t_IterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterativeLinearSolverEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterativeLinearSolverEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.providesResidual());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "java/util/List.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Header::class$ = NULL;
        jmethodID *SP3Header::mids$ = NULL;
        bool SP3Header::live$ = false;
        ::java::lang::String *SP3Header::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Header::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Header");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addComment_734b91ac30d5f9b4] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
            mids$[mid_addSatId_734b91ac30d5f9b4] = env->getMethodID(cls, "addSatId", "(Ljava/lang/String;)V");
            mids$[mid_getAccuracy_a84f304e8cd7ce1b] = env->getMethodID(cls, "getAccuracy", "(Ljava/lang/String;)D");
            mids$[mid_getAgency_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAgency", "()Ljava/lang/String;");
            mids$[mid_getClockBase_b74f83833fdad017] = env->getMethodID(cls, "getClockBase", "()D");
            mids$[mid_getComments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getCoordinateSystem_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCoordinateSystem", "()Ljava/lang/String;");
            mids$[mid_getDataUsed_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDataUsed", "()Ljava/util/List;");
            mids$[mid_getDayFraction_b74f83833fdad017] = env->getMethodID(cls, "getDayFraction", "()D");
            mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochInterval_b74f83833fdad017] = env->getMethodID(cls, "getEpochInterval", "()D");
            mids$[mid_getFilter_63bfdcc4b7a0536c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getGpsWeek_55546ef6a647f39b] = env->getMethodID(cls, "getGpsWeek", "()I");
            mids$[mid_getModifiedJulianDay_55546ef6a647f39b] = env->getMethodID(cls, "getModifiedJulianDay", "()I");
            mids$[mid_getNumberOfEpochs_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfEpochs", "()I");
            mids$[mid_getOrbitType_71c14ff93916aacc] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_getOrbitTypeKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOrbitTypeKey", "()Ljava/lang/String;");
            mids$[mid_getPosVelBase_b74f83833fdad017] = env->getMethodID(cls, "getPosVelBase", "()D");
            mids$[mid_getSatIds_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSatIds", "()Ljava/util/List;");
            mids$[mid_getSecondsOfWeek_b74f83833fdad017] = env->getMethodID(cls, "getSecondsOfWeek", "()D");
            mids$[mid_getTimeSystem_28830357acffb3e1] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_getType_ba422381bb7c60c3] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_getVersion_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getVersion", "()C");
            mids$[mid_setAccuracy_d5322b8b512aeb26] = env->getMethodID(cls, "setAccuracy", "(ID)V");
            mids$[mid_setAgency_734b91ac30d5f9b4] = env->getMethodID(cls, "setAgency", "(Ljava/lang/String;)V");
            mids$[mid_setClockBase_8ba9fe7a847cecad] = env->getMethodID(cls, "setClockBase", "(D)V");
            mids$[mid_setCoordinateSystem_734b91ac30d5f9b4] = env->getMethodID(cls, "setCoordinateSystem", "(Ljava/lang/String;)V");
            mids$[mid_setDataUsed_0e7c3032c7c93ed3] = env->getMethodID(cls, "setDataUsed", "(Ljava/util/List;)V");
            mids$[mid_setDayFraction_8ba9fe7a847cecad] = env->getMethodID(cls, "setDayFraction", "(D)V");
            mids$[mid_setEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setEpochInterval_8ba9fe7a847cecad] = env->getMethodID(cls, "setEpochInterval", "(D)V");
            mids$[mid_setFilter_6ac810da33942183] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setGpsWeek_44ed599e93e8a30c] = env->getMethodID(cls, "setGpsWeek", "(I)V");
            mids$[mid_setModifiedJulianDay_44ed599e93e8a30c] = env->getMethodID(cls, "setModifiedJulianDay", "(I)V");
            mids$[mid_setNumberOfEpochs_44ed599e93e8a30c] = env->getMethodID(cls, "setNumberOfEpochs", "(I)V");
            mids$[mid_setOrbitTypeKey_734b91ac30d5f9b4] = env->getMethodID(cls, "setOrbitTypeKey", "(Ljava/lang/String;)V");
            mids$[mid_setPosVelBase_8ba9fe7a847cecad] = env->getMethodID(cls, "setPosVelBase", "(D)V");
            mids$[mid_setSecondsOfWeek_8ba9fe7a847cecad] = env->getMethodID(cls, "setSecondsOfWeek", "(D)V");
            mids$[mid_setTimeSystem_885124f6a0a748ea] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
            mids$[mid_setType_704e55a56e9bfadc] = env->getMethodID(cls, "setType", "(Lorg/orekit/files/sp3/SP3FileType;)V");
            mids$[mid_setVersion_df95ad02f5b4acd9] = env->getMethodID(cls, "setVersion", "(C)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Header::SP3Header() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void SP3Header::addComment(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_734b91ac30d5f9b4], a0.this$);
        }

        void SP3Header::addSatId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatId_734b91ac30d5f9b4], a0.this$);
        }

        jdouble SP3Header::getAccuracy(const ::java::lang::String & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_a84f304e8cd7ce1b], a0.this$);
        }

        ::java::lang::String SP3Header::getAgency() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgency_1c1fa1e935d6cdcf]));
        }

        jdouble SP3Header::getClockBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockBase_b74f83833fdad017]);
        }

        ::java::util::List SP3Header::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_e62d3bb06d56d7e3]));
        }

        ::java::lang::String SP3Header::getCoordinateSystem() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoordinateSystem_1c1fa1e935d6cdcf]));
        }

        ::java::util::List SP3Header::getDataUsed() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataUsed_e62d3bb06d56d7e3]));
        }

        jdouble SP3Header::getDayFraction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDayFraction_b74f83833fdad017]);
        }

        ::org::orekit::time::AbsoluteDate SP3Header::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
        }

        jdouble SP3Header::getEpochInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochInterval_b74f83833fdad017]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Header::getFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_63bfdcc4b7a0536c]));
        }

        jint SP3Header::getGpsWeek() const
        {
          return env->callIntMethod(this$, mids$[mid_getGpsWeek_55546ef6a647f39b]);
        }

        jint SP3Header::getModifiedJulianDay() const
        {
          return env->callIntMethod(this$, mids$[mid_getModifiedJulianDay_55546ef6a647f39b]);
        }

        jint SP3Header::getNumberOfEpochs() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfEpochs_55546ef6a647f39b]);
        }

        ::org::orekit::files::sp3::SP3OrbitType SP3Header::getOrbitType() const
        {
          return ::org::orekit::files::sp3::SP3OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_71c14ff93916aacc]));
        }

        ::java::lang::String SP3Header::getOrbitTypeKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbitTypeKey_1c1fa1e935d6cdcf]));
        }

        jdouble SP3Header::getPosVelBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPosVelBase_b74f83833fdad017]);
        }

        ::java::util::List SP3Header::getSatIds() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatIds_e62d3bb06d56d7e3]));
        }

        jdouble SP3Header::getSecondsOfWeek() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondsOfWeek_b74f83833fdad017]);
        }

        ::org::orekit::gnss::TimeSystem SP3Header::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_28830357acffb3e1]));
        }

        ::org::orekit::files::sp3::SP3FileType SP3Header::getType() const
        {
          return ::org::orekit::files::sp3::SP3FileType(env->callObjectMethod(this$, mids$[mid_getType_ba422381bb7c60c3]));
        }

        jchar SP3Header::getVersion() const
        {
          return env->callCharMethod(this$, mids$[mid_getVersion_5e2f8fc4d7c03fbd]);
        }

        void SP3Header::setAccuracy(jint a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setAccuracy_d5322b8b512aeb26], a0, a1);
        }

        void SP3Header::setAgency(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAgency_734b91ac30d5f9b4], a0.this$);
        }

        void SP3Header::setClockBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setClockBase_8ba9fe7a847cecad], a0);
        }

        void SP3Header::setCoordinateSystem(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCoordinateSystem_734b91ac30d5f9b4], a0.this$);
        }

        void SP3Header::setDataUsed(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataUsed_0e7c3032c7c93ed3], a0.this$);
        }

        void SP3Header::setDayFraction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDayFraction_8ba9fe7a847cecad], a0);
        }

        void SP3Header::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_02135a6ef25adb4b], a0.this$);
        }

        void SP3Header::setEpochInterval(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochInterval_8ba9fe7a847cecad], a0);
        }

        void SP3Header::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_6ac810da33942183], a0.this$);
        }

        void SP3Header::setGpsWeek(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setGpsWeek_44ed599e93e8a30c], a0);
        }

        void SP3Header::setModifiedJulianDay(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setModifiedJulianDay_44ed599e93e8a30c], a0);
        }

        void SP3Header::setNumberOfEpochs(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNumberOfEpochs_44ed599e93e8a30c], a0);
        }

        void SP3Header::setOrbitTypeKey(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitTypeKey_734b91ac30d5f9b4], a0.this$);
        }

        void SP3Header::setPosVelBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosVelBase_8ba9fe7a847cecad], a0);
        }

        void SP3Header::setSecondsOfWeek(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSecondsOfWeek_8ba9fe7a847cecad], a0);
        }

        void SP3Header::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_885124f6a0a748ea], a0.this$);
        }

        void SP3Header::setType(const ::org::orekit::files::sp3::SP3FileType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setType_704e55a56e9bfadc], a0.this$);
        }

        void SP3Header::setVersion(jchar a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_df95ad02f5b4acd9], a0);
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
      namespace sp3 {
        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAgency(t_SP3Header *self);
        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getComments(t_SP3Header *self);
        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self);
        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self);
        static PyObject *t_SP3Header_getFilter(t_SP3Header *self);
        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self);
        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self);
        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self);
        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getType(t_SP3Header *self);
        static PyObject *t_SP3Header_getVersion(t_SP3Header *self);
        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args);
        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data);
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data);
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data);
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data);
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data);
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data);
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data);
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data);
        static PyGetSetDef t_SP3Header__fields_[] = {
          DECLARE_GETSET_FIELD(t_SP3Header, agency),
          DECLARE_GETSET_FIELD(t_SP3Header, clockBase),
          DECLARE_GET_FIELD(t_SP3Header, comments),
          DECLARE_GETSET_FIELD(t_SP3Header, coordinateSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, dataUsed),
          DECLARE_GETSET_FIELD(t_SP3Header, dayFraction),
          DECLARE_GETSET_FIELD(t_SP3Header, epoch),
          DECLARE_GETSET_FIELD(t_SP3Header, epochInterval),
          DECLARE_GETSET_FIELD(t_SP3Header, filter),
          DECLARE_GETSET_FIELD(t_SP3Header, gpsWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, modifiedJulianDay),
          DECLARE_GETSET_FIELD(t_SP3Header, numberOfEpochs),
          DECLARE_GET_FIELD(t_SP3Header, orbitType),
          DECLARE_GETSET_FIELD(t_SP3Header, orbitTypeKey),
          DECLARE_GETSET_FIELD(t_SP3Header, posVelBase),
          DECLARE_GET_FIELD(t_SP3Header, satIds),
          DECLARE_GETSET_FIELD(t_SP3Header, secondsOfWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, timeSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, type),
          DECLARE_GETSET_FIELD(t_SP3Header, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Header__methods_[] = {
          DECLARE_METHOD(t_SP3Header, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, addComment, METH_O),
          DECLARE_METHOD(t_SP3Header, addSatId, METH_O),
          DECLARE_METHOD(t_SP3Header, getAccuracy, METH_O),
          DECLARE_METHOD(t_SP3Header, getAgency, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getClockBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getComments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getCoordinateSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDataUsed, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDayFraction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpochInterval, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getFilter, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getGpsWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getModifiedJulianDay, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getNumberOfEpochs, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitTypeKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getPosVelBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSatIds, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSecondsOfWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, setAccuracy, METH_VARARGS),
          DECLARE_METHOD(t_SP3Header, setAgency, METH_O),
          DECLARE_METHOD(t_SP3Header, setClockBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setCoordinateSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setDataUsed, METH_O),
          DECLARE_METHOD(t_SP3Header, setDayFraction, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpoch, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpochInterval, METH_O),
          DECLARE_METHOD(t_SP3Header, setFilter, METH_O),
          DECLARE_METHOD(t_SP3Header, setGpsWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setModifiedJulianDay, METH_O),
          DECLARE_METHOD(t_SP3Header, setNumberOfEpochs, METH_O),
          DECLARE_METHOD(t_SP3Header, setOrbitTypeKey, METH_O),
          DECLARE_METHOD(t_SP3Header, setPosVelBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setSecondsOfWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setTimeSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setType, METH_O),
          DECLARE_METHOD(t_SP3Header, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Header)[] = {
          { Py_tp_methods, t_SP3Header__methods_ },
          { Py_tp_init, (void *) t_SP3Header_init_ },
          { Py_tp_getset, t_SP3Header__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Header)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Header, t_SP3Header, SP3Header);

        void t_SP3Header::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Header), &PY_TYPE_DEF(SP3Header), module, "SP3Header", 0);
        }

        void t_SP3Header::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "class_", make_descriptor(SP3Header::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "wrapfn_", make_descriptor(t_SP3Header::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Header::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Header::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Header::initializeClass, 1)))
            return NULL;
          return t_SP3Header::wrap_Object(SP3Header(((t_SP3Header *) arg)->object.this$));
        }
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Header::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds)
        {
          SP3Header object((jobject) NULL);

          INT_CALL(object = SP3Header());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addSatId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatId", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getAccuracy(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAccuracy", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAgency(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAgency());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getComments(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinateSystem());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(DataUsed));
        }

        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDayFraction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getFilter(t_SP3Header *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getGpsWeek());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitTypeKey());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3FileType result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getVersion(t_SP3Header *self)
        {
          jchar result;
          OBJ_CALL(result = self->object.getVersion());
          return c2p(result);
        }

        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args)
        {
          jint a0;
          jdouble a1;

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(self->object.setAccuracy(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAgency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAgency", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setClockBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setClockBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setCoordinateSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCoordinateSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.setDataUsed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataUsed", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDayFraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDayFraction", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setEpochInterval(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochInterval", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            OBJ_CALL(self->object.setFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFilter", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setGpsWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGpsWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setModifiedJulianDay(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setModifiedJulianDay", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setNumberOfEpochs(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNumberOfEpochs", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOrbitTypeKey(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitTypeKey", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPosVelBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosVelBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSecondsOfWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSecondsOfWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
          {
            OBJ_CALL(self->object.setTimeSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3FileType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sp3::SP3FileType::initializeClass, &a0, &p0, ::org::orekit::files::sp3::t_SP3FileType::parameters_))
          {
            OBJ_CALL(self->object.setType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setType", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg)
        {
          jchar a0;

          if (!parseArg(arg, "C", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAgency());
          return j2p(value);
        }
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAgency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "agency", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setClockBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "clockBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinateSystem());
          return j2p(value);
        }
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setCoordinateSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "coordinateSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::util::List value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
            {
              INT_CALL(self->object.setDataUsed(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataUsed", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDayFraction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDayFraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dayFraction", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epoch", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setEpochInterval(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochInterval", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &value))
            {
              INT_CALL(self->object.setFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getGpsWeek());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setGpsWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "gpsWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setModifiedJulianDay(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "modifiedJulianDay", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setNumberOfEpochs(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "numberOfEpochs", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitTypeKey());
          return j2p(value);
        }
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOrbitTypeKey(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitTypeKey", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPosVelBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "posVelBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSecondsOfWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "secondsOfWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(value);
        }
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3FileType::initializeClass, &value))
            {
              INT_CALL(self->object.setType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "type", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data)
        {
          jchar value;
          OBJ_CALL(value = self->object.getVersion());
          return c2p(value);
        }
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jchar value;
            if (!parseArg(arg, "C", &value))
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
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile$OrekitSatelliteEphemeris::class$ = NULL;
        jmethodID *OrekitEphemerisFile$OrekitSatelliteEphemeris::mids$ = NULL;
        bool OrekitEphemerisFile$OrekitSatelliteEphemeris::live$ = false;
        jint OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_1b2d5f6f1140772a] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_ceb877471350c2b6] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_392b89799e5fafbf] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_233dbeb496e98923] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;ILorg/orekit/time/TimeScale;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitSatelliteEphemeris::OrekitEphemerisFile$OrekitSatelliteEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_1b2d5f6f1140772a], a0.this$));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, jint a1) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_ceb877471350c2b6], a0.this$, a1));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_392b89799e5fafbf], a0.this$, a1.this$, a2));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2, const ::org::orekit::time::TimeScale & a3) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_233dbeb496e98923], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitEphemerisFile$OrekitSatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
        }

        jdouble OrekitEphemerisFile$OrekitSatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::java::util::List OrekitEphemerisFile$OrekitSatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
      namespace general {
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris, t_OrekitEphemerisFile$OrekitSatelliteEphemeris, OrekitEphemerisFile$OrekitSatelliteEphemeris);

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), &PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris), module, "OrekitEphemerisFile$OrekitSatelliteEphemeris", 0);
        }

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "class_", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "wrapfn_", make_descriptor(t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_Object(OrekitEphemerisFile$OrekitSatelliteEphemeris(((t_OrekitEphemerisFile$OrekitSatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitEphemerisFile$OrekitSatelliteEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitEphemerisFile$OrekitSatelliteEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkI", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkIk", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedException::class$ = NULL;
        jmethodID *RuggedException::mids$ = NULL;
        bool RuggedException::live$ = false;

        jclass RuggedException::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedException");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_init$_4d462b77e7e55a0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedException::RuggedException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

        RuggedException::RuggedException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4d462b77e7e55a0d, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String RuggedException::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String RuggedException::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String RuggedException::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedException::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
        }

        ::org::hipparchus::exception::Localizable RuggedException::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
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
      namespace errors {
        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getParts(t_RuggedException *self);
        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self);
        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data);
        static PyGetSetDef t_RuggedException__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedException, localizedMessage),
          DECLARE_GET_FIELD(t_RuggedException, message),
          DECLARE_GET_FIELD(t_RuggedException, parts),
          DECLARE_GET_FIELD(t_RuggedException, specifier),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedException__methods_[] = {
          DECLARE_METHOD(t_RuggedException, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, getLocalizedMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getParts, METH_NOARGS),
          DECLARE_METHOD(t_RuggedException, getSpecifier, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedException)[] = {
          { Py_tp_methods, t_RuggedException__methods_ },
          { Py_tp_init, (void *) t_RuggedException_init_ },
          { Py_tp_getset, t_RuggedException__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedException)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedException, t_RuggedException, RuggedException);

        void t_RuggedException::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedException), &PY_TYPE_DEF(RuggedException), module, "RuggedException", 0);
        }

        void t_RuggedException::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "class_", make_descriptor(RuggedException::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "wrapfn_", make_descriptor(t_RuggedException::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedException::initializeClass, 1)))
            return NULL;
          return t_RuggedException::wrap_Object(RuggedException(((t_RuggedException *) arg)->object.this$));
        }
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedException::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::exception::Localizable a0((jobject) NULL);
              JArray< ::java::lang::Object > a1((jobject) NULL);
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
              {
                INT_CALL(object = RuggedException(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::Throwable a0((jobject) NULL);
              ::org::hipparchus::exception::Localizable a1((jobject) NULL);
              JArray< ::java::lang::Object > a2((jobject) NULL);
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = RuggedException(a0, a1, a2));
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

        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLocalizedMessage());
            return j2p(result);
          }

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getLocalizedMessage", args, 2);
        }

        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessage());
              return j2p(result);
            }
            break;
           case 1:
            {
              ::java::util::Locale a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMessage(a0));
                return j2p(result);
              }
            }
          }

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getMessage", args, 2);
        }

        static PyObject *t_RuggedException_getParts(t_RuggedException *self)
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParts());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self)
        {
          ::org::hipparchus::exception::Localizable result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
        }

        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalizedMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data)
        {
          JArray< ::java::lang::Object > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParts());
          return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data)
        {
          ::org::hipparchus::exception::Localizable value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
        }
      }
    }
  }
}
